// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROVISIONINGTEMPLATEVERSIONREQUEST_H
#define QTAWS_CREATEPROVISIONINGTEMPLATEVERSIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreateProvisioningTemplateVersionRequestPrivate;

class QTAWSIOT_EXPORT CreateProvisioningTemplateVersionRequest : public IoTRequest {

public:
    CreateProvisioningTemplateVersionRequest(const CreateProvisioningTemplateVersionRequest &other);
    CreateProvisioningTemplateVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProvisioningTemplateVersionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
