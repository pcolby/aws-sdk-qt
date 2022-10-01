// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLIFECYCLEHOOKRESPONSE_H
#define QTAWS_PUTLIFECYCLEHOOKRESPONSE_H

#include "autoscalingresponse.h"
#include "putlifecyclehookrequest.h"

namespace QtAws {
namespace AutoScaling {

class PutLifecycleHookResponsePrivate;

class QTAWSAUTOSCALING_EXPORT PutLifecycleHookResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    PutLifecycleHookResponse(const PutLifecycleHookRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutLifecycleHookRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLifecycleHookResponse)
    Q_DISABLE_COPY(PutLifecycleHookResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
