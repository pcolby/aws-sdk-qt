// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROVISIONINGTEMPLATEVERSIONREQUEST_P_H
#define QTAWS_DELETEPROVISIONINGTEMPLATEVERSIONREQUEST_P_H

#include "iotrequest_p.h"
#include "deleteprovisioningtemplateversionrequest.h"

namespace QtAws {
namespace IoT {

class DeleteProvisioningTemplateVersionRequest;

class DeleteProvisioningTemplateVersionRequestPrivate : public IoTRequestPrivate {

public:
    DeleteProvisioningTemplateVersionRequestPrivate(const IoTRequest::Action action,
                                   DeleteProvisioningTemplateVersionRequest * const q);
    DeleteProvisioningTemplateVersionRequestPrivate(const DeleteProvisioningTemplateVersionRequestPrivate &other,
                                   DeleteProvisioningTemplateVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProvisioningTemplateVersionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
