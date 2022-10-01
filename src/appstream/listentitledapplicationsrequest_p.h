// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITLEDAPPLICATIONSREQUEST_P_H
#define QTAWS_LISTENTITLEDAPPLICATIONSREQUEST_P_H

#include "appstreamrequest_p.h"
#include "listentitledapplicationsrequest.h"

namespace QtAws {
namespace AppStream {

class ListEntitledApplicationsRequest;

class ListEntitledApplicationsRequestPrivate : public AppStreamRequestPrivate {

public:
    ListEntitledApplicationsRequestPrivate(const AppStreamRequest::Action action,
                                   ListEntitledApplicationsRequest * const q);
    ListEntitledApplicationsRequestPrivate(const ListEntitledApplicationsRequestPrivate &other,
                                   ListEntitledApplicationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEntitledApplicationsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
