// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROVISIONINGCLAIMREQUEST_H
#define QTAWS_CREATEPROVISIONINGCLAIMREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreateProvisioningClaimRequestPrivate;

class QTAWSIOT_EXPORT CreateProvisioningClaimRequest : public IoTRequest {

public:
    CreateProvisioningClaimRequest(const CreateProvisioningClaimRequest &other);
    CreateProvisioningClaimRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProvisioningClaimRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
