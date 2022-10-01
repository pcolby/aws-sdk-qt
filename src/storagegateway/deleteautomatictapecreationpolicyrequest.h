// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTOMATICTAPECREATIONPOLICYREQUEST_H
#define QTAWS_DELETEAUTOMATICTAPECREATIONPOLICYREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteAutomaticTapeCreationPolicyRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DeleteAutomaticTapeCreationPolicyRequest : public StorageGatewayRequest {

public:
    DeleteAutomaticTapeCreationPolicyRequest(const DeleteAutomaticTapeCreationPolicyRequest &other);
    DeleteAutomaticTapeCreationPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAutomaticTapeCreationPolicyRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
