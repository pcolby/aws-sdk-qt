// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFACETRESPONSE_P_H
#define QTAWS_UPDATEFACETRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class UpdateFacetResponse;

class UpdateFacetResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit UpdateFacetResponsePrivate(UpdateFacetResponse * const q);

    void parseUpdateFacetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFacetResponse)
    Q_DISABLE_COPY(UpdateFacetResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
