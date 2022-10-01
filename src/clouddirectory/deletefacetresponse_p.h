// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFACETRESPONSE_P_H
#define QTAWS_DELETEFACETRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class DeleteFacetResponse;

class DeleteFacetResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit DeleteFacetResponsePrivate(DeleteFacetResponse * const q);

    void parseDeleteFacetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFacetResponse)
    Q_DISABLE_COPY(DeleteFacetResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
