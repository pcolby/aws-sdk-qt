// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETEDSENTIMENTDETECTIONJOBSREQUEST_H
#define QTAWS_LISTTARGETEDSENTIMENTDETECTIONJOBSREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class ListTargetedSentimentDetectionJobsRequestPrivate;

class QTAWSCOMPREHEND_EXPORT ListTargetedSentimentDetectionJobsRequest : public ComprehendRequest {

public:
    ListTargetedSentimentDetectionJobsRequest(const ListTargetedSentimentDetectionJobsRequest &other);
    ListTargetedSentimentDetectionJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTargetedSentimentDetectionJobsRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
