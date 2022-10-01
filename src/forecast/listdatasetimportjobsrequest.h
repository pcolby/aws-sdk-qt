// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETIMPORTJOBSREQUEST_H
#define QTAWS_LISTDATASETIMPORTJOBSREQUEST_H

#include "forecastrequest.h"

namespace QtAws {
namespace Forecast {

class ListDatasetImportJobsRequestPrivate;

class QTAWSFORECAST_EXPORT ListDatasetImportJobsRequest : public ForecastRequest {

public:
    ListDatasetImportJobsRequest(const ListDatasetImportJobsRequest &other);
    ListDatasetImportJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDatasetImportJobsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
