// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETGROUPREQUEST_P_H
#define QTAWS_CREATEDATASETGROUPREQUEST_P_H

#include "forecastrequest_p.h"
#include "createdatasetgrouprequest.h"

namespace QtAws {
namespace Forecast {

class CreateDatasetGroupRequest;

class CreateDatasetGroupRequestPrivate : public ForecastRequestPrivate {

public:
    CreateDatasetGroupRequestPrivate(const ForecastRequest::Action action,
                                   CreateDatasetGroupRequest * const q);
    CreateDatasetGroupRequestPrivate(const CreateDatasetGroupRequestPrivate &other,
                                   CreateDatasetGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDatasetGroupRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
