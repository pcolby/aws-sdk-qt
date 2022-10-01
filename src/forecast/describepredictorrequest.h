// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPREDICTORREQUEST_H
#define QTAWS_DESCRIBEPREDICTORREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DescribePredictorRequestPrivate;

class QTAWSFORECAST_EXPORT DescribePredictorRequest : public ForecastRequest {

public:
    DescribePredictorRequest(const DescribePredictorRequest &other);
    DescribePredictorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePredictorRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
