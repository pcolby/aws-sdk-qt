// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONSETREQUEST_P_H
#define QTAWS_DESCRIBECONFIGURATIONSETREQUEST_P_H

#include "sesrequest_p.h"
#include "describeconfigurationsetrequest.h"

namespace QtAws {
namespace Ses {

class DescribeConfigurationSetRequest;

class DescribeConfigurationSetRequestPrivate : public SesRequestPrivate {

public:
    DescribeConfigurationSetRequestPrivate(const SesRequest::Action action,
                                   DescribeConfigurationSetRequest * const q);
    DescribeConfigurationSetRequestPrivate(const DescribeConfigurationSetRequestPrivate &other,
                                   DescribeConfigurationSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConfigurationSetRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
