// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROVISIONINGTEMPLATEREQUEST_P_H
#define QTAWS_UPDATEPROVISIONINGTEMPLATEREQUEST_P_H

#include "iotrequest_p.h"
#include "updateprovisioningtemplaterequest.h"

namespace QtAws {
namespace IoT {

class UpdateProvisioningTemplateRequest;

class UpdateProvisioningTemplateRequestPrivate : public IoTRequestPrivate {

public:
    UpdateProvisioningTemplateRequestPrivate(const IoTRequest::Action action,
                                   UpdateProvisioningTemplateRequest * const q);
    UpdateProvisioningTemplateRequestPrivate(const UpdateProvisioningTemplateRequestPrivate &other,
                                   UpdateProvisioningTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateProvisioningTemplateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
