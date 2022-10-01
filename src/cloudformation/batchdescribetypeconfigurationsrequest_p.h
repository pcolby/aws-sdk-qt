// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDESCRIBETYPECONFIGURATIONSREQUEST_P_H
#define QTAWS_BATCHDESCRIBETYPECONFIGURATIONSREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "batchdescribetypeconfigurationsrequest.h"

namespace QtAws {
namespace CloudFormation {

class BatchDescribeTypeConfigurationsRequest;

class BatchDescribeTypeConfigurationsRequestPrivate : public CloudFormationRequestPrivate {

public:
    BatchDescribeTypeConfigurationsRequestPrivate(const CloudFormationRequest::Action action,
                                   BatchDescribeTypeConfigurationsRequest * const q);
    BatchDescribeTypeConfigurationsRequestPrivate(const BatchDescribeTypeConfigurationsRequestPrivate &other,
                                   BatchDescribeTypeConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDescribeTypeConfigurationsRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
