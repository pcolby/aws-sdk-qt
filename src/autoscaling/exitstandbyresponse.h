// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXITSTANDBYRESPONSE_H
#define QTAWS_EXITSTANDBYRESPONSE_H

#include "autoscalingresponse.h"
#include "exitstandbyrequest.h"

namespace QtAws {
namespace AutoScaling {

class ExitStandbyResponsePrivate;

class QTAWSAUTOSCALING_EXPORT ExitStandbyResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    ExitStandbyResponse(const ExitStandbyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExitStandbyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExitStandbyResponse)
    Q_DISABLE_COPY(ExitStandbyResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
