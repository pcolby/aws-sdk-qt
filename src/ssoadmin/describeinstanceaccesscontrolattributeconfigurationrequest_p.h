// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCEACCESSCONTROLATTRIBUTECONFIGURATIONREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "describeinstanceaccesscontrolattributeconfigurationrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DescribeInstanceAccessControlAttributeConfigurationRequest;

class DescribeInstanceAccessControlAttributeConfigurationRequestPrivate : public SsoAdminRequestPrivate {

public:
    DescribeInstanceAccessControlAttributeConfigurationRequestPrivate(const SsoAdminRequest::Action action,
                                   DescribeInstanceAccessControlAttributeConfigurationRequest * const q);
    DescribeInstanceAccessControlAttributeConfigurationRequestPrivate(const DescribeInstanceAccessControlAttributeConfigurationRequestPrivate &other,
                                   DescribeInstanceAccessControlAttributeConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceAccessControlAttributeConfigurationRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
