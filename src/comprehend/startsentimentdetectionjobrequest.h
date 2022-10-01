// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSENTIMENTDETECTIONJOBREQUEST_H
#define QTAWS_STARTSENTIMENTDETECTIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class StartSentimentDetectionJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT StartSentimentDetectionJobRequest : public ComprehendRequest {

public:
    StartSentimentDetectionJobRequest(const StartSentimentDetectionJobRequest &other);
    StartSentimentDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSentimentDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
