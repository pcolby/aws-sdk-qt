// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTOMATICTAPECREATIONPOLICYREQUEST_P_H
#define QTAWS_DELETEAUTOMATICTAPECREATIONPOLICYREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "deleteautomatictapecreationpolicyrequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteAutomaticTapeCreationPolicyRequest;

class DeleteAutomaticTapeCreationPolicyRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DeleteAutomaticTapeCreationPolicyRequestPrivate(const StorageGatewayRequest::Action action,
                                   DeleteAutomaticTapeCreationPolicyRequest * const q);
    DeleteAutomaticTapeCreationPolicyRequestPrivate(const DeleteAutomaticTapeCreationPolicyRequestPrivate &other,
                                   DeleteAutomaticTapeCreationPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAutomaticTapeCreationPolicyRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
