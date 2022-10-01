// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPREDICTORBACKTESTEXPORTJOBREQUEST_H
#define QTAWS_DELETEPREDICTORBACKTESTEXPORTJOBREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DeletePredictorBacktestExportJobRequestPrivate;

class QTAWSFORECAST_EXPORT DeletePredictorBacktestExportJobRequest : public ForecastRequest {

public:
    DeletePredictorBacktestExportJobRequest(const DeletePredictorBacktestExportJobRequest &other);
    DeletePredictorBacktestExportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePredictorBacktestExportJobRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
