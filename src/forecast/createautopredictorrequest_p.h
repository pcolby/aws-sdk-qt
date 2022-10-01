// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTOPREDICTORREQUEST_P_H
#define QTAWS_CREATEAUTOPREDICTORREQUEST_P_H

#include "forecastrequest_p.h"
#include "createautopredictorrequest.h"

namespace QtAws {
namespace Forecast {

class CreateAutoPredictorRequest;

class CreateAutoPredictorRequestPrivate : public ForecastRequestPrivate {

public:
    CreateAutoPredictorRequestPrivate(const ForecastRequest::Action action,
                                   CreateAutoPredictorRequest * const q);
    CreateAutoPredictorRequestPrivate(const CreateAutoPredictorRequestPrivate &other,
                                   CreateAutoPredictorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAutoPredictorRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
