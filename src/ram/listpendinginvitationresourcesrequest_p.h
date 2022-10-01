// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPENDINGINVITATIONRESOURCESREQUEST_P_H
#define QTAWS_LISTPENDINGINVITATIONRESOURCESREQUEST_P_H

#include "ramrequest_p.h"
#include "listpendinginvitationresourcesrequest.h"

namespace QtAws {
namespace Ram {

class ListPendingInvitationResourcesRequest;

class ListPendingInvitationResourcesRequestPrivate : public RamRequestPrivate {

public:
    ListPendingInvitationResourcesRequestPrivate(const RamRequest::Action action,
                                   ListPendingInvitationResourcesRequest * const q);
    ListPendingInvitationResourcesRequestPrivate(const ListPendingInvitationResourcesRequestPrivate &other,
                                   ListPendingInvitationResourcesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPendingInvitationResourcesRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
