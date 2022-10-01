// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTAUDITCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBEACCOUNTAUDITCONFIGURATIONREQUEST_P_H

#include "iotrequest_p.h"
#include "describeaccountauditconfigurationrequest.h"

namespace QtAws {
namespace IoT {

class DescribeAccountAuditConfigurationRequest;

class DescribeAccountAuditConfigurationRequestPrivate : public IoTRequestPrivate {

public:
    DescribeAccountAuditConfigurationRequestPrivate(const IoTRequest::Action action,
                                   DescribeAccountAuditConfigurationRequest * const q);
    DescribeAccountAuditConfigurationRequestPrivate(const DescribeAccountAuditConfigurationRequestPrivate &other,
                                   DescribeAccountAuditConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccountAuditConfigurationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
