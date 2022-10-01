// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWHATIFFORECASTREQUEST_H
#define QTAWS_CREATEWHATIFFORECASTREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class CreateWhatIfForecastRequestPrivate;

class QTAWSFORECAST_EXPORT CreateWhatIfForecastRequest : public ForecastRequest {

public:
    CreateWhatIfForecastRequest(const CreateWhatIfForecastRequest &other);
    CreateWhatIfForecastRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWhatIfForecastRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
