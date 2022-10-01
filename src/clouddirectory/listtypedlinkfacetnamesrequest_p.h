// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTYPEDLINKFACETNAMESREQUEST_P_H
#define QTAWS_LISTTYPEDLINKFACETNAMESREQUEST_P_H

#include "clouddirectoryrequest_p.h"
#include "listtypedlinkfacetnamesrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListTypedLinkFacetNamesRequest;

class ListTypedLinkFacetNamesRequestPrivate : public CloudDirectoryRequestPrivate {

public:
    ListTypedLinkFacetNamesRequestPrivate(const CloudDirectoryRequest::Action action,
                                   ListTypedLinkFacetNamesRequest * const q);
    ListTypedLinkFacetNamesRequestPrivate(const ListTypedLinkFacetNamesRequestPrivate &other,
                                   ListTypedLinkFacetNamesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTypedLinkFacetNamesRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
