// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROVISIONINGTEMPLATEVERSIONREQUEST_P_H
#define QTAWS_DESCRIBEPROVISIONINGTEMPLATEVERSIONREQUEST_P_H

#include "iotrequest_p.h"
#include "describeprovisioningtemplateversionrequest.h"

namespace QtAws {
namespace IoT {

class DescribeProvisioningTemplateVersionRequest;

class DescribeProvisioningTemplateVersionRequestPrivate : public IoTRequestPrivate {

public:
    DescribeProvisioningTemplateVersionRequestPrivate(const IoTRequest::Action action,
                                   DescribeProvisioningTemplateVersionRequest * const q);
    DescribeProvisioningTemplateVersionRequestPrivate(const DescribeProvisioningTemplateVersionRequestPrivate &other,
                                   DescribeProvisioningTemplateVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProvisioningTemplateVersionRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
