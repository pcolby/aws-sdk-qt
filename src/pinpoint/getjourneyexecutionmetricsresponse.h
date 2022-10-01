// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOURNEYEXECUTIONMETRICSRESPONSE_H
#define QTAWS_GETJOURNEYEXECUTIONMETRICSRESPONSE_H

#include "pinpointresponse.h"
#include "getjourneyexecutionmetricsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetJourneyExecutionMetricsResponsePrivate;

class QTAWSPINPOINT_EXPORT GetJourneyExecutionMetricsResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetJourneyExecutionMetricsResponse(const GetJourneyExecutionMetricsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetJourneyExecutionMetricsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJourneyExecutionMetricsResponse)
    Q_DISABLE_COPY(GetJourneyExecutionMetricsResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
