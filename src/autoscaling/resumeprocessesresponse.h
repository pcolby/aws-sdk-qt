// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMEPROCESSESRESPONSE_H
#define QTAWS_RESUMEPROCESSESRESPONSE_H

#include "autoscalingresponse.h"
#include "resumeprocessesrequest.h"

namespace QtAws {
namespace AutoScaling {

class ResumeProcessesResponsePrivate;

class QTAWSAUTOSCALING_EXPORT ResumeProcessesResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    ResumeProcessesResponse(const ResumeProcessesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResumeProcessesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResumeProcessesResponse)
    Q_DISABLE_COPY(ResumeProcessesResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
