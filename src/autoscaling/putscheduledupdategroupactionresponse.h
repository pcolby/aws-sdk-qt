// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCHEDULEDUPDATEGROUPACTIONRESPONSE_H
#define QTAWS_PUTSCHEDULEDUPDATEGROUPACTIONRESPONSE_H

#include "autoscalingresponse.h"
#include "putscheduledupdategroupactionrequest.h"

namespace QtAws {
namespace AutoScaling {

class PutScheduledUpdateGroupActionResponsePrivate;

class QTAWSAUTOSCALING_EXPORT PutScheduledUpdateGroupActionResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    PutScheduledUpdateGroupActionResponse(const PutScheduledUpdateGroupActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutScheduledUpdateGroupActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutScheduledUpdateGroupActionResponse)
    Q_DISABLE_COPY(PutScheduledUpdateGroupActionResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
