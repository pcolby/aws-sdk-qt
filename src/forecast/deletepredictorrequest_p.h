// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPREDICTORREQUEST_P_H
#define QTAWS_DELETEPREDICTORREQUEST_P_H

#include "forecastrequest_p.h"
#include "deletepredictorrequest.h"

namespace QtAws {
namespace Forecast {

class DeletePredictorRequest;

class DeletePredictorRequestPrivate : public ForecastRequestPrivate {

public:
    DeletePredictorRequestPrivate(const ForecastRequest::Action action,
                                   DeletePredictorRequest * const q);
    DeletePredictorRequestPrivate(const DeletePredictorRequestPrivate &other,
                                   DeletePredictorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePredictorRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
