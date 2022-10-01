// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWARMPOOLREQUEST_H
#define QTAWS_DESCRIBEWARMPOOLREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeWarmPoolRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DescribeWarmPoolRequest : public AutoScalingRequest {

public:
    DescribeWarmPoolRequest(const DescribeWarmPoolRequest &other);
    DescribeWarmPoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWarmPoolRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
