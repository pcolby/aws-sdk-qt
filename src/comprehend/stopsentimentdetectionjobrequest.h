// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSENTIMENTDETECTIONJOBREQUEST_H
#define QTAWS_STOPSENTIMENTDETECTIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class StopSentimentDetectionJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT StopSentimentDetectionJobRequest : public ComprehendRequest {

public:
    StopSentimentDetectionJobRequest(const StopSentimentDetectionJobRequest &other);
    StopSentimentDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopSentimentDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
