// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWHATIFFORECASTEXPORTREQUEST_H
#define QTAWS_DELETEWHATIFFORECASTEXPORTREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteWhatIfForecastExportRequestPrivate;

class QTAWSFORECAST_EXPORT DeleteWhatIfForecastExportRequest : public ForecastRequest {

public:
    DeleteWhatIfForecastExportRequest(const DeleteWhatIfForecastExportRequest &other);
    DeleteWhatIfForecastExportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWhatIfForecastExportRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
