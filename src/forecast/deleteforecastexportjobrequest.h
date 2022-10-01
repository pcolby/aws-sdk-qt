// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFORECASTEXPORTJOBREQUEST_H
#define QTAWS_DELETEFORECASTEXPORTJOBREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteForecastExportJobRequestPrivate;

class QTAWSFORECAST_EXPORT DeleteForecastExportJobRequest : public ForecastRequest {

public:
    DeleteForecastExportJobRequest(const DeleteForecastExportJobRequest &other);
    DeleteForecastExportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteForecastExportJobRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
