// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETGROUPREQUEST_P_H
#define QTAWS_UPDATEDATASETGROUPREQUEST_P_H

#include "forecastrequest_p.h"
#include "updatedatasetgrouprequest.h"

namespace QtAws {
namespace Forecast {

class UpdateDatasetGroupRequest;

class UpdateDatasetGroupRequestPrivate : public ForecastRequestPrivate {

public:
    UpdateDatasetGroupRequestPrivate(const ForecastRequest::Action action,
                                   UpdateDatasetGroupRequest * const q);
    UpdateDatasetGroupRequestPrivate(const UpdateDatasetGroupRequestPrivate &other,
                                   UpdateDatasetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDatasetGroupRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
