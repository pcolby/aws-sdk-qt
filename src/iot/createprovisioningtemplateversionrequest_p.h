// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROVISIONINGTEMPLATEVERSIONREQUEST_P_H
#define QTAWS_CREATEPROVISIONINGTEMPLATEVERSIONREQUEST_P_H

#include "iotrequest_p.h"
#include "createprovisioningtemplateversionrequest.h"

namespace QtAws {
namespace IoT {

class CreateProvisioningTemplateVersionRequest;

class CreateProvisioningTemplateVersionRequestPrivate : public IoTRequestPrivate {

public:
    CreateProvisioningTemplateVersionRequestPrivate(const IoTRequest::Action action,
                                   CreateProvisioningTemplateVersionRequest * const q);
    CreateProvisioningTemplateVersionRequestPrivate(const CreateProvisioningTemplateVersionRequestPrivate &other,
                                   CreateProvisioningTemplateVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateProvisioningTemplateVersionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
