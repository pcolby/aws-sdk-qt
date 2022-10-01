// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWHATIFANALYSISREQUEST_H
#define QTAWS_DESCRIBEWHATIFANALYSISREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeWhatIfAnalysisRequestPrivate;

class QTAWSFORECAST_EXPORT DescribeWhatIfAnalysisRequest : public ForecastRequest {

public:
    DescribeWhatIfAnalysisRequest(const DescribeWhatIfAnalysisRequest &other);
    DescribeWhatIfAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWhatIfAnalysisRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
