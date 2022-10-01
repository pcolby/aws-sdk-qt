// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROVISIONINGTEMPLATEREQUEST_P_H
#define QTAWS_CREATEPROVISIONINGTEMPLATEREQUEST_P_H

#include "iotrequest_p.h"
#include "createprovisioningtemplaterequest.h"

namespace QtAws {
namespace IoT {

class CreateProvisioningTemplateRequest;

class CreateProvisioningTemplateRequestPrivate : public IoTRequestPrivate {

public:
    CreateProvisioningTemplateRequestPrivate(const IoTRequest::Action action,
                                   CreateProvisioningTemplateRequest * const q);
    CreateProvisioningTemplateRequestPrivate(const CreateProvisioningTemplateRequestPrivate &other,
                                   CreateProvisioningTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateProvisioningTemplateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
