// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEFAULTENCRYPTIONCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBEDEFAULTENCRYPTIONCONFIGURATIONREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "describedefaultencryptionconfigurationrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeDefaultEncryptionConfigurationRequest;

class DescribeDefaultEncryptionConfigurationRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    DescribeDefaultEncryptionConfigurationRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   DescribeDefaultEncryptionConfigurationRequest * const q);
    DescribeDefaultEncryptionConfigurationRequestPrivate(const DescribeDefaultEncryptionConfigurationRequestPrivate &other,
                                   DescribeDefaultEncryptionConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDefaultEncryptionConfigurationRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
