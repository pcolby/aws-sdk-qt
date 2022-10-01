// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPREDICTIVESCALINGFORECASTREQUEST_H
#define QTAWS_GETPREDICTIVESCALINGFORECASTREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class GetPredictiveScalingForecastRequestPrivate;

class QTAWSAUTOSCALING_EXPORT GetPredictiveScalingForecastRequest : public AutoScalingRequest {

public:
    GetPredictiveScalingForecastRequest(const GetPredictiveScalingForecastRequest &other);
    GetPredictiveScalingForecastRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPredictiveScalingForecastRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
