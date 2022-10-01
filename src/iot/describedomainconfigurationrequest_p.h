// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBEDOMAINCONFIGURATIONREQUEST_P_H

#include "iotrequest_p.h"
#include "describedomainconfigurationrequest.h"

namespace QtAws {
namespace IoT {

class DescribeDomainConfigurationRequest;

class DescribeDomainConfigurationRequestPrivate : public IoTRequestPrivate {

public:
    DescribeDomainConfigurationRequestPrivate(const IoTRequest::Action action,
                                   DescribeDomainConfigurationRequest * const q);
    DescribeDomainConfigurationRequestPrivate(const DescribeDomainConfigurationRequestPrivate &other,
                                   DescribeDomainConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDomainConfigurationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
