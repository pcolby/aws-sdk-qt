// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROVISIONINGTEMPLATEREQUEST_P_H
#define QTAWS_DELETEPROVISIONINGTEMPLATEREQUEST_P_H

#include "iotrequest_p.h"
#include "deleteprovisioningtemplaterequest.h"

namespace QtAws {
namespace IoT {

class DeleteProvisioningTemplateRequest;

class DeleteProvisioningTemplateRequestPrivate : public IoTRequestPrivate {

public:
    DeleteProvisioningTemplateRequestPrivate(const IoTRequest::Action action,
                                   DeleteProvisioningTemplateRequest * const q);
    DeleteProvisioningTemplateRequestPrivate(const DeleteProvisioningTemplateRequestPrivate &other,
                                   DeleteProvisioningTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProvisioningTemplateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
