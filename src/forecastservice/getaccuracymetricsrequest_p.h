/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETACCURACYMETRICSREQUEST_P_H
#define QTAWS_GETACCURACYMETRICSREQUEST_P_H

#include "forecastservicerequest_p.h"
#include "getaccuracymetricsrequest.h"

namespace QtAws {
namespace ForecastService {

class GetAccuracyMetricsRequest;

class GetAccuracyMetricsRequestPrivate : public ForecastServiceRequestPrivate {

public:
    GetAccuracyMetricsRequestPrivate(const ForecastServiceRequest::Action action,
                                   GetAccuracyMetricsRequest * const q);
    GetAccuracyMetricsRequestPrivate(const GetAccuracyMetricsRequestPrivate &other,
                                   GetAccuracyMetricsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccuracyMetricsRequest)

};

} // namespace ForecastService
} // namespace QtAws

#endif
