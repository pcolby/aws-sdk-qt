// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGRULESREQUEST_P_H
#define QTAWS_DESCRIBECONFIGRULESREQUEST_P_H

#include "configservicerequest_p.h"
#include "describeconfigrulesrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigRulesRequest;

class DescribeConfigRulesRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeConfigRulesRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeConfigRulesRequest * const q);
    DescribeConfigRulesRequestPrivate(const DescribeConfigRulesRequestPrivate &other,
                                   DescribeConfigRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeConfigRulesRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
