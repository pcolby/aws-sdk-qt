// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPLAINABILITYREQUEST_P_H
#define QTAWS_DELETEEXPLAINABILITYREQUEST_P_H

#include "forecastrequest_p.h"
#include "deleteexplainabilityrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteExplainabilityRequest;

class DeleteExplainabilityRequestPrivate : public ForecastRequestPrivate {

public:
    DeleteExplainabilityRequestPrivate(const ForecastRequest::Action action,
                                   DeleteExplainabilityRequest * const q);
    DeleteExplainabilityRequestPrivate(const DeleteExplainabilityRequestPrivate &other,
                                   DeleteExplainabilityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteExplainabilityRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
