// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMBSECURITYSTRATEGYREQUEST_H
#define QTAWS_UPDATESMBSECURITYSTRATEGYREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateSMBSecurityStrategyRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateSMBSecurityStrategyRequest : public StorageGatewayRequest {

public:
    UpdateSMBSecurityStrategyRequest(const UpdateSMBSecurityStrategyRequest &other);
    UpdateSMBSecurityStrategyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSMBSecurityStrategyRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
