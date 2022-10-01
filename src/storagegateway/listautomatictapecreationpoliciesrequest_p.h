// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUTOMATICTAPECREATIONPOLICIESREQUEST_P_H
#define QTAWS_LISTAUTOMATICTAPECREATIONPOLICIESREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "listautomatictapecreationpoliciesrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListAutomaticTapeCreationPoliciesRequest;

class ListAutomaticTapeCreationPoliciesRequestPrivate : public StorageGatewayRequestPrivate {

public:
    ListAutomaticTapeCreationPoliciesRequestPrivate(const StorageGatewayRequest::Action action,
                                   ListAutomaticTapeCreationPoliciesRequest * const q);
    ListAutomaticTapeCreationPoliciesRequestPrivate(const ListAutomaticTapeCreationPoliciesRequestPrivate &other,
                                   ListAutomaticTapeCreationPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAutomaticTapeCreationPoliciesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
