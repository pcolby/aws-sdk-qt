// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTIMESERIESREQUEST_P_H
#define QTAWS_LISTTIMESERIESREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "listtimeseriesrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListTimeSeriesRequest;

class ListTimeSeriesRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    ListTimeSeriesRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   ListTimeSeriesRequest * const q);
    ListTimeSeriesRequestPrivate(const ListTimeSeriesRequestPrivate &other,
                                   ListTimeSeriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTimeSeriesRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
