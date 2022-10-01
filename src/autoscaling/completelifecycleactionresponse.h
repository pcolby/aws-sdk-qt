// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETELIFECYCLEACTIONRESPONSE_H
#define QTAWS_COMPLETELIFECYCLEACTIONRESPONSE_H

#include "autoscalingresponse.h"
#include "completelifecycleactionrequest.h"

namespace QtAws {
namespace AutoScaling {

class CompleteLifecycleActionResponsePrivate;

class QTAWSAUTOSCALING_EXPORT CompleteLifecycleActionResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    CompleteLifecycleActionResponse(const CompleteLifecycleActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CompleteLifecycleActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CompleteLifecycleActionResponse)
    Q_DISABLE_COPY(CompleteLifecycleActionResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
