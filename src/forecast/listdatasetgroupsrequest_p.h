// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETGROUPSREQUEST_P_H
#define QTAWS_LISTDATASETGROUPSREQUEST_P_H

#include "forecastrequest_p.h"
#include "listdatasetgroupsrequest.h"

namespace QtAws {
namespace Forecast {

class ListDatasetGroupsRequest;

class ListDatasetGroupsRequestPrivate : public ForecastRequestPrivate {

public:
    ListDatasetGroupsRequestPrivate(const ForecastRequest::Action action,
                                   ListDatasetGroupsRequest * const q);
    ListDatasetGroupsRequestPrivate(const ListDatasetGroupsRequestPrivate &other,
                                   ListDatasetGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDatasetGroupsRequest)

};

} // namespace Forecast
} // namespace QtAws

#endif
