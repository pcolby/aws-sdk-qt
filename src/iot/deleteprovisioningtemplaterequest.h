// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROVISIONINGTEMPLATEREQUEST_H
#define QTAWS_DELETEPROVISIONINGTEMPLATEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteProvisioningTemplateRequestPrivate;

class QTAWSIOT_EXPORT DeleteProvisioningTemplateRequest : public IoTRequest {

public:
    DeleteProvisioningTemplateRequest(const DeleteProvisioningTemplateRequest &other);
    DeleteProvisioningTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProvisioningTemplateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
