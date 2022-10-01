// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGGINGCONFIGURATIONREQUEST_P_H
#define QTAWS_DESCRIBELOGGINGCONFIGURATIONREQUEST_P_H

#include "amprequest_p.h"
#include "describeloggingconfigurationrequest.h"

namespace QtAws {
namespace Amp {

class DescribeLoggingConfigurationRequest;

class DescribeLoggingConfigurationRequestPrivate : public AmpRequestPrivate {

public:
    DescribeLoggingConfigurationRequestPrivate(const AmpRequest::Action action,
                                   DescribeLoggingConfigurationRequest * const q);
    DescribeLoggingConfigurationRequestPrivate(const DescribeLoggingConfigurationRequestPrivate &other,
                                   DescribeLoggingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLoggingConfigurationRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
