// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAUTOMATICTAPECREATIONPOLICIESREQUEST_H
#define QTAWS_LISTAUTOMATICTAPECREATIONPOLICIESREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListAutomaticTapeCreationPoliciesRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ListAutomaticTapeCreationPoliciesRequest : public StorageGatewayRequest {

public:
    ListAutomaticTapeCreationPoliciesRequest(const ListAutomaticTapeCreationPoliciesRequest &other);
    ListAutomaticTapeCreationPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAutomaticTapeCreationPoliciesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
