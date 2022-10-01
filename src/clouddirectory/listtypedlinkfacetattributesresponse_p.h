// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTYPEDLINKFACETATTRIBUTESRESPONSE_P_H
#define QTAWS_LISTTYPEDLINKFACETATTRIBUTESRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class ListTypedLinkFacetAttributesResponse;

class ListTypedLinkFacetAttributesResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit ListTypedLinkFacetAttributesResponsePrivate(ListTypedLinkFacetAttributesResponse * const q);

    void parseListTypedLinkFacetAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTypedLinkFacetAttributesResponse)
    Q_DISABLE_COPY(ListTypedLinkFacetAttributesResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
