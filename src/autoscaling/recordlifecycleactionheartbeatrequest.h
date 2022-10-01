// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECORDLIFECYCLEACTIONHEARTBEATREQUEST_H
#define QTAWS_RECORDLIFECYCLEACTIONHEARTBEATREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class RecordLifecycleActionHeartbeatRequestPrivate;

class QTAWSAUTOSCALING_EXPORT RecordLifecycleActionHeartbeatRequest : public AutoScalingRequest {

public:
    RecordLifecycleActionHeartbeatRequest(const RecordLifecycleActionHeartbeatRequest &other);
    RecordLifecycleActionHeartbeatRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RecordLifecycleActionHeartbeatRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
