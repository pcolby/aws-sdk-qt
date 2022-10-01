// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETIMESERIESREQUEST_P_H
#define QTAWS_DELETETIMESERIESREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "deletetimeseriesrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DeleteTimeSeriesRequest;

class DeleteTimeSeriesRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    DeleteTimeSeriesRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   DeleteTimeSeriesRequest * const q);
    DeleteTimeSeriesRequestPrivate(const DeleteTimeSeriesRequestPrivate &other,
                                   DeleteTimeSeriesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTimeSeriesRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
