// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUTOMATICTAPECREATIONPOLICYREQUEST_P_H
#define QTAWS_UPDATEAUTOMATICTAPECREATIONPOLICYREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "updateautomatictapecreationpolicyrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateAutomaticTapeCreationPolicyRequest;

class UpdateAutomaticTapeCreationPolicyRequestPrivate : public StorageGatewayRequestPrivate {

public:
    UpdateAutomaticTapeCreationPolicyRequestPrivate(const StorageGatewayRequest::Action action,
                                   UpdateAutomaticTapeCreationPolicyRequest * const q);
    UpdateAutomaticTapeCreationPolicyRequestPrivate(const UpdateAutomaticTapeCreationPolicyRequestPrivate &other,
                                   UpdateAutomaticTapeCreationPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAutomaticTapeCreationPolicyRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
