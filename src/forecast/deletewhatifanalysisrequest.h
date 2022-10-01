// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWHATIFANALYSISREQUEST_H
#define QTAWS_DELETEWHATIFANALYSISREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteWhatIfAnalysisRequestPrivate;

class QTAWSFORECAST_EXPORT DeleteWhatIfAnalysisRequest : public ForecastRequest {

public:
    DeleteWhatIfAnalysisRequest(const DeleteWhatIfAnalysisRequest &other);
    DeleteWhatIfAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteWhatIfAnalysisRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
