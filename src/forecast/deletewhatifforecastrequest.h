// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWHATIFFORECASTREQUEST_H
#define QTAWS_DELETEWHATIFFORECASTREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteWhatIfForecastRequestPrivate;

class QTAWSFORECAST_EXPORT DeleteWhatIfForecastRequest : public ForecastRequest {

public:
    DeleteWhatIfForecastRequest(const DeleteWhatIfForecastRequest &other);
    DeleteWhatIfForecastRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWhatIfForecastRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
