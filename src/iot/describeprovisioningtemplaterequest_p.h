// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROVISIONINGTEMPLATEREQUEST_P_H
#define QTAWS_DESCRIBEPROVISIONINGTEMPLATEREQUEST_P_H

#include "iotrequest_p.h"
#include "describeprovisioningtemplaterequest.h"

namespace QtAws {
namespace IoT {

class DescribeProvisioningTemplateRequest;

class DescribeProvisioningTemplateRequestPrivate : public IoTRequestPrivate {

public:
    DescribeProvisioningTemplateRequestPrivate(const IoTRequest::Action action,
                                   DescribeProvisioningTemplateRequest * const q);
    DescribeProvisioningTemplateRequestPrivate(const DescribeProvisioningTemplateRequestPrivate &other,
                                   DescribeProvisioningTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProvisioningTemplateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
