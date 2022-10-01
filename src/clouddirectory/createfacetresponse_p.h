// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFACETRESPONSE_P_H
#define QTAWS_CREATEFACETRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class CreateFacetResponse;

class CreateFacetResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit CreateFacetResponsePrivate(CreateFacetResponse * const q);

    void parseCreateFacetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFacetResponse)
    Q_DISABLE_COPY(CreateFacetResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
