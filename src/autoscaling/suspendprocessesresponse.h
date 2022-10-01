// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SUSPENDPROCESSESRESPONSE_H
#define QTAWS_SUSPENDPROCESSESRESPONSE_H

#include "autoscalingresponse.h"
#include "suspendprocessesrequest.h"

namespace QtAws {
namespace AutoScaling {

class SuspendProcessesResponsePrivate;

class QTAWSAUTOSCALING_EXPORT SuspendProcessesResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    SuspendProcessesResponse(const SuspendProcessesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SuspendProcessesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SuspendProcessesResponse)
    Q_DISABLE_COPY(SuspendProcessesResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
