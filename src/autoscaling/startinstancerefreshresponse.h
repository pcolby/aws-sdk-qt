// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINSTANCEREFRESHRESPONSE_H
#define QTAWS_STARTINSTANCEREFRESHRESPONSE_H

#include "autoscalingresponse.h"
#include "startinstancerefreshrequest.h"

namespace QtAws {
namespace AutoScaling {

class StartInstanceRefreshResponsePrivate;

class QTAWSAUTOSCALING_EXPORT StartInstanceRefreshResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    StartInstanceRefreshResponse(const StartInstanceRefreshRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartInstanceRefreshRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartInstanceRefreshResponse)
    Q_DISABLE_COPY(StartInstanceRefreshResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
