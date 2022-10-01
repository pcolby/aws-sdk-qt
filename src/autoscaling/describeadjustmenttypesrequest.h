// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADJUSTMENTTYPESREQUEST_H
#define QTAWS_DESCRIBEADJUSTMENTTYPESREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeAdjustmentTypesRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DescribeAdjustmentTypesRequest : public AutoScalingRequest {

public:
    DescribeAdjustmentTypesRequest(const DescribeAdjustmentTypesRequest &other);
    DescribeAdjustmentTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAdjustmentTypesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
