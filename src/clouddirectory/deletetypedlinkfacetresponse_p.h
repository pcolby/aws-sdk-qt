// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETYPEDLINKFACETRESPONSE_P_H
#define QTAWS_DELETETYPEDLINKFACETRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class DeleteTypedLinkFacetResponse;

class DeleteTypedLinkFacetResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit DeleteTypedLinkFacetResponsePrivate(DeleteTypedLinkFacetResponse * const q);

    void parseDeleteTypedLinkFacetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTypedLinkFacetResponse)
    Q_DISABLE_COPY(DeleteTypedLinkFacetResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
