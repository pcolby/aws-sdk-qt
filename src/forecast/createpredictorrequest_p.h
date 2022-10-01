// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPREDICTORREQUEST_P_H
#define QTAWS_CREATEPREDICTORREQUEST_P_H

#include "forecastrequest_p.h"
#include "createpredictorrequest.h"

namespace QtAws {
namespace Forecast {

class CreatePredictorRequest;

class CreatePredictorRequestPrivate : public ForecastRequestPrivate {

public:
    CreatePredictorRequestPrivate(const ForecastRequest::Action action,
                                   CreatePredictorRequest * const q);
    CreatePredictorRequestPrivate(const CreatePredictorRequestPrivate &other,
                                   CreatePredictorRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePredictorRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
