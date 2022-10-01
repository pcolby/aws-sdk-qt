// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETESCHEDULEDACTIONRESPONSE_H
#define QTAWS_BATCHDELETESCHEDULEDACTIONRESPONSE_H

#include "autoscalingresponse.h"
#include "batchdeletescheduledactionrequest.h"

namespace QtAws {
namespace AutoScaling {

class BatchDeleteScheduledActionResponsePrivate;

class QTAWSAUTOSCALING_EXPORT BatchDeleteScheduledActionResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    BatchDeleteScheduledActionResponse(const BatchDeleteScheduledActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDeleteScheduledActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteScheduledActionResponse)
    Q_DISABLE_COPY(BatchDeleteScheduledActionResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
