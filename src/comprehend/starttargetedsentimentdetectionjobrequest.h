// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTARGETEDSENTIMENTDETECTIONJOBREQUEST_H
#define QTAWS_STARTTARGETEDSENTIMENTDETECTIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class StartTargetedSentimentDetectionJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT StartTargetedSentimentDetectionJobRequest : public ComprehendRequest {

public:
    StartTargetedSentimentDetectionJobRequest(const StartTargetedSentimentDetectionJobRequest &other);
    StartTargetedSentimentDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTargetedSentimentDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
