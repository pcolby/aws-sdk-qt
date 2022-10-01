// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETARGETEDSENTIMENTDETECTIONJOBREQUEST_H
#define QTAWS_DESCRIBETARGETEDSENTIMENTDETECTIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeTargetedSentimentDetectionJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT DescribeTargetedSentimentDetectionJobRequest : public ComprehendRequest {

public:
    DescribeTargetedSentimentDetectionJobRequest(const DescribeTargetedSentimentDetectionJobRequest &other);
    DescribeTargetedSentimentDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTargetedSentimentDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
