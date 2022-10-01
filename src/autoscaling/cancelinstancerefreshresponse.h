// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELINSTANCEREFRESHRESPONSE_H
#define QTAWS_CANCELINSTANCEREFRESHRESPONSE_H

#include "autoscalingresponse.h"
#include "cancelinstancerefreshrequest.h"

namespace QtAws {
namespace AutoScaling {

class CancelInstanceRefreshResponsePrivate;

class QTAWSAUTOSCALING_EXPORT CancelInstanceRefreshResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    CancelInstanceRefreshResponse(const CancelInstanceRefreshRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelInstanceRefreshRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelInstanceRefreshResponse)
    Q_DISABLE_COPY(CancelInstanceRefreshResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
