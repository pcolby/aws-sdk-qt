// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFORECASTREQUEST_H
#define QTAWS_CREATEFORECASTREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class CreateForecastRequestPrivate;

class QTAWSFORECAST_EXPORT CreateForecastRequest : public ForecastRequest {

public:
    CreateForecastRequest(const CreateForecastRequest &other);
    CreateForecastRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateForecastRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
