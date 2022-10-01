// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWHATIFFORECASTEXPORTREQUEST_H
#define QTAWS_CREATEWHATIFFORECASTEXPORTREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class CreateWhatIfForecastExportRequestPrivate;

class QTAWSFORECAST_EXPORT CreateWhatIfForecastExportRequest : public ForecastRequest {

public:
    CreateWhatIfForecastExportRequest(const CreateWhatIfForecastExportRequest &other);
    CreateWhatIfForecastExportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWhatIfForecastExportRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
