// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROVISIONINGTEMPLATEREQUEST_H
#define QTAWS_DESCRIBEPROVISIONINGTEMPLATEREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeProvisioningTemplateRequestPrivate;

class QTAWSIOT_EXPORT DescribeProvisioningTemplateRequest : public IoTRequest {

public:
    DescribeProvisioningTemplateRequest(const DescribeProvisioningTemplateRequest &other);
    DescribeProvisioningTemplateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProvisioningTemplateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
