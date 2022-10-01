// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETGROUPREQUEST_P_H
#define QTAWS_DELETEDATASETGROUPREQUEST_P_H

#include "forecastrequest_p.h"
#include "deletedatasetgrouprequest.h"

namespace QtAws {
namespace Forecast {

class DeleteDatasetGroupRequest;

class DeleteDatasetGroupRequestPrivate : public ForecastRequestPrivate {

public:
    DeleteDatasetGroupRequestPrivate(const ForecastRequest::Action action,
                                   DeleteDatasetGroupRequest * const q);
    DeleteDatasetGroupRequestPrivate(const DeleteDatasetGroupRequestPrivate &other,
                                   DeleteDatasetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDatasetGroupRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
