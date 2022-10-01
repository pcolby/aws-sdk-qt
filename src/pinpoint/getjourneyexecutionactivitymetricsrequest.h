// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOURNEYEXECUTIONACTIVITYMETRICSREQUEST_H
#define QTAWS_GETJOURNEYEXECUTIONACTIVITYMETRICSREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetJourneyExecutionActivityMetricsRequestPrivate;

class QTAWSPINPOINT_EXPORT GetJourneyExecutionActivityMetricsRequest : public PinpointRequest {

public:
    GetJourneyExecutionActivityMetricsRequest(const GetJourneyExecutionActivityMetricsRequest &other);
    GetJourneyExecutionActivityMetricsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJourneyExecutionActivityMetricsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
