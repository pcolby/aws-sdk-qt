// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROVISIONINGTEMPLATEREQUEST_H
#define QTAWS_UPDATEPROVISIONINGTEMPLATEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class UpdateProvisioningTemplateRequestPrivate;

class QTAWSIOT_EXPORT UpdateProvisioningTemplateRequest : public IoTRequest {

public:
    UpdateProvisioningTemplateRequest(const UpdateProvisioningTemplateRequest &other);
    UpdateProvisioningTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProvisioningTemplateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
