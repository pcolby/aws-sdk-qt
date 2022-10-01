// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETIMPORTJOBSREQUEST_P_H
#define QTAWS_LISTDATASETIMPORTJOBSREQUEST_P_H

#include "forecastrequest_p.h"
#include "listdatasetimportjobsrequest.h"

namespace QtAws {
namespace Forecast {

class ListDatasetImportJobsRequest;

class ListDatasetImportJobsRequestPrivate : public ForecastRequestPrivate {

public:
    ListDatasetImportJobsRequestPrivate(const ForecastRequest::Action action,
                                   ListDatasetImportJobsRequest * const q);
    ListDatasetImportJobsRequestPrivate(const ListDatasetImportJobsRequestPrivate &other,
                                   ListDatasetImportJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDatasetImportJobsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
