// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTOSCALINGGROUPRESPONSE_H
#define QTAWS_CREATEAUTOSCALINGGROUPRESPONSE_H

#include "autoscalingresponse.h"
#include "createautoscalinggrouprequest.h"

namespace QtAws {
namespace AutoScaling {

class CreateAutoScalingGroupResponsePrivate;

class QTAWSAUTOSCALING_EXPORT CreateAutoScalingGroupResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    CreateAutoScalingGroupResponse(const CreateAutoScalingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAutoScalingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAutoScalingGroupResponse)
    Q_DISABLE_COPY(CreateAutoScalingGroupResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
