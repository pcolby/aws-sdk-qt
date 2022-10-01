// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPLAINABILITYREQUEST_P_H
#define QTAWS_CREATEEXPLAINABILITYREQUEST_P_H

#include "forecastrequest_p.h"
#include "createexplainabilityrequest.h"

namespace QtAws {
namespace Forecast {

class CreateExplainabilityRequest;

class CreateExplainabilityRequestPrivate : public ForecastRequestPrivate {

public:
    CreateExplainabilityRequestPrivate(const ForecastRequest::Action action,
                                   CreateExplainabilityRequest * const q);
    CreateExplainabilityRequestPrivate(const CreateExplainabilityRequestPrivate &other,
                                   CreateExplainabilityRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateExplainabilityRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
