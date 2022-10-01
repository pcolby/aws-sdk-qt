// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROVISIONINGCLAIMREQUEST_P_H
#define QTAWS_CREATEPROVISIONINGCLAIMREQUEST_P_H

#include "iotrequest_p.h"
#include "createprovisioningclaimrequest.h"

namespace QtAws {
namespace IoT {

class CreateProvisioningClaimRequest;

class CreateProvisioningClaimRequestPrivate : public IoTRequestPrivate {

public:
    CreateProvisioningClaimRequestPrivate(const IoTRequest::Action action,
                                   CreateProvisioningClaimRequest * const q);
    CreateProvisioningClaimRequestPrivate(const CreateProvisioningClaimRequestPrivate &other,
                                   CreateProvisioningClaimRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateProvisioningClaimRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
