// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENTERSTANDBYRESPONSE_H
#define QTAWS_ENTERSTANDBYRESPONSE_H

#include "autoscalingresponse.h"
#include "enterstandbyrequest.h"

namespace QtAws {
namespace AutoScaling {

class EnterStandbyResponsePrivate;

class QTAWSAUTOSCALING_EXPORT EnterStandbyResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    EnterStandbyResponse(const EnterStandbyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnterStandbyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnterStandbyResponse)
    Q_DISABLE_COPY(EnterStandbyResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
