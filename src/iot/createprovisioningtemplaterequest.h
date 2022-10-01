// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROVISIONINGTEMPLATEREQUEST_H
#define QTAWS_CREATEPROVISIONINGTEMPLATEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreateProvisioningTemplateRequestPrivate;

class QTAWSIOT_EXPORT CreateProvisioningTemplateRequest : public IoTRequest {

public:
    CreateProvisioningTemplateRequest(const CreateProvisioningTemplateRequest &other);
    CreateProvisioningTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProvisioningTemplateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
