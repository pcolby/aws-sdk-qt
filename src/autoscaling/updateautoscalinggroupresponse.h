// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUTOSCALINGGROUPRESPONSE_H
#define QTAWS_UPDATEAUTOSCALINGGROUPRESPONSE_H

#include "autoscalingresponse.h"
#include "updateautoscalinggrouprequest.h"

namespace QtAws {
namespace AutoScaling {

class UpdateAutoScalingGroupResponsePrivate;

class QTAWSAUTOSCALING_EXPORT UpdateAutoScalingGroupResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    UpdateAutoScalingGroupResponse(const UpdateAutoScalingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAutoScalingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAutoScalingGroupResponse)
    Q_DISABLE_COPY(UpdateAutoScalingGroupResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
