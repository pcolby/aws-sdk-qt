// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERETENTIONCONFIGURATIONSREQUEST_P_H
#define QTAWS_DESCRIBERETENTIONCONFIGURATIONSREQUEST_P_H

#include "configservicerequest_p.h"
#include "describeretentionconfigurationsrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeRetentionConfigurationsRequest;

class DescribeRetentionConfigurationsRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeRetentionConfigurationsRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeRetentionConfigurationsRequest * const q);
    DescribeRetentionConfigurationsRequestPrivate(const DescribeRetentionConfigurationsRequestPrivate &other,
                                   DescribeRetentionConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRetentionConfigurationsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
