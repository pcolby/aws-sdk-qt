// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPEVENTSDETECTIONJOBREQUEST_H
#define QTAWS_STOPEVENTSDETECTIONJOBREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class StopEventsDetectionJobRequestPrivate;

class QTAWSCOMPREHEND_EXPORT StopEventsDetectionJobRequest : public ComprehendRequest {

public:
    StopEventsDetectionJobRequest(const StopEventsDetectionJobRequest &other);
    StopEventsDetectionJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopEventsDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
