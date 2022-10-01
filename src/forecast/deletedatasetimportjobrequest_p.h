// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETIMPORTJOBREQUEST_P_H
#define QTAWS_DELETEDATASETIMPORTJOBREQUEST_P_H

#include "forecastrequest_p.h"
#include "deletedatasetimportjobrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteDatasetImportJobRequest;

class DeleteDatasetImportJobRequestPrivate : public ForecastRequestPrivate {

public:
    DeleteDatasetImportJobRequestPrivate(const ForecastRequest::Action action,
                                   DeleteDatasetImportJobRequest * const q);
    DeleteDatasetImportJobRequestPrivate(const DeleteDatasetImportJobRequestPrivate &other,
                                   DeleteDatasetImportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDatasetImportJobRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
