// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTOSCALINGGROUPRESPONSE_H
#define QTAWS_DELETEAUTOSCALINGGROUPRESPONSE_H

#include "autoscalingresponse.h"
#include "deleteautoscalinggrouprequest.h"

namespace QtAws {
namespace AutoScaling {

class DeleteAutoScalingGroupResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DeleteAutoScalingGroupResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DeleteAutoScalingGroupResponse(const DeleteAutoScalingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAutoScalingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAutoScalingGroupResponse)
    Q_DISABLE_COPY(DeleteAutoScalingGroupResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
