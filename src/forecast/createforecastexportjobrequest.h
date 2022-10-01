// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFORECASTEXPORTJOBREQUEST_H
#define QTAWS_CREATEFORECASTEXPORTJOBREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class CreateForecastExportJobRequestPrivate;

class QTAWSFORECAST_EXPORT CreateForecastExportJobRequest : public ForecastRequest {

public:
    CreateForecastExportJobRequest(const CreateForecastExportJobRequest &other);
    CreateForecastExportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateForecastExportJobRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
