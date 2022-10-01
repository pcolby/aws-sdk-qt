// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOURNEYEXECUTIONACTIVITYMETRICSRESPONSE_H
#define QTAWS_GETJOURNEYEXECUTIONACTIVITYMETRICSRESPONSE_H

#include "pinpointresponse.h"
#include "getjourneyexecutionactivitymetricsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetJourneyExecutionActivityMetricsResponsePrivate;

class QTAWSPINPOINT_EXPORT GetJourneyExecutionActivityMetricsResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetJourneyExecutionActivityMetricsResponse(const GetJourneyExecutionActivityMetricsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetJourneyExecutionActivityMetricsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJourneyExecutionActivityMetricsResponse)
    Q_DISABLE_COPY(GetJourneyExecutionActivityMetricsResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
