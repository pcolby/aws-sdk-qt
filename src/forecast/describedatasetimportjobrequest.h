// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETIMPORTJOBREQUEST_H
#define QTAWS_DESCRIBEDATASETIMPORTJOBREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class DescribeDatasetImportJobRequestPrivate;

class QTAWSFORECAST_EXPORT DescribeDatasetImportJobRequest : public ForecastRequest {

public:
    DescribeDatasetImportJobRequest(const DescribeDatasetImportJobRequest &other);
    DescribeDatasetImportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDatasetImportJobRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
