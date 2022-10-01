// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETREQUEST_P_H
#define QTAWS_DELETEDATASETREQUEST_P_H

#include "forecastrequest_p.h"
#include "deletedatasetrequest.h"

namespace QtAws {
namespace Forecast {

class DeleteDatasetRequest;

class DeleteDatasetRequestPrivate : public ForecastRequestPrivate {

public:
    DeleteDatasetRequestPrivate(const ForecastRequest::Action action,
                                   DeleteDatasetRequest * const q);
    DeleteDatasetRequestPrivate(const DeleteDatasetRequestPrivate &other,
                                   DeleteDatasetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDatasetRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
