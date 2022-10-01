// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTYPEDLINKFACETATTRIBUTESREQUEST_P_H
#define QTAWS_LISTTYPEDLINKFACETATTRIBUTESREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listtypedlinkfacetattributesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListTypedLinkFacetAttributesRequest;

class ListTypedLinkFacetAttributesRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListTypedLinkFacetAttributesRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ListTypedLinkFacetAttributesRequest * const q);
    ListTypedLinkFacetAttributesRequestPrivate(const ListTypedLinkFacetAttributesRequestPrivate &other,
                                   ListTypedLinkFacetAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTypedLinkFacetAttributesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
