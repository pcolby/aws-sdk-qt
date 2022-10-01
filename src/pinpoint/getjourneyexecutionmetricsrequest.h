// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOURNEYEXECUTIONMETRICSREQUEST_H
#define QTAWS_GETJOURNEYEXECUTIONMETRICSREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetJourneyExecutionMetricsRequestPrivate;

class QTAWSPINPOINT_EXPORT GetJourneyExecutionMetricsRequest : public PinpointRequest {

public:
    GetJourneyExecutionMetricsRequest(const GetJourneyExecutionMetricsRequest &other);
    GetJourneyExecutionMetricsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJourneyExecutionMetricsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
