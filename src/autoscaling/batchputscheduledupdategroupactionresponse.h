// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTSCHEDULEDUPDATEGROUPACTIONRESPONSE_H
#define QTAWS_BATCHPUTSCHEDULEDUPDATEGROUPACTIONRESPONSE_H

#include "autoscalingresponse.h"
#include "batchputscheduledupdategroupactionrequest.h"

namespace QtAws {
namespace AutoScaling {

class BatchPutScheduledUpdateGroupActionResponsePrivate;

class QTAWSAUTOSCALING_EXPORT BatchPutScheduledUpdateGroupActionResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    BatchPutScheduledUpdateGroupActionResponse(const BatchPutScheduledUpdateGroupActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchPutScheduledUpdateGroupActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchPutScheduledUpdateGroupActionResponse)
    Q_DISABLE_COPY(BatchPutScheduledUpdateGroupActionResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
