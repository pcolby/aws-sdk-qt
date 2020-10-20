/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_GETDATASETCONTENTREQUEST_P_H
#define QTAWS_GETDATASETCONTENTREQUEST_P_H

#include "iotanalyticsrequest_p.h"
#include "getdatasetcontentrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class GetDatasetContentRequest;

class QTAWS_EXPORT GetDatasetContentRequestPrivate : public IoTAnalyticsRequestPrivate {

public:
    GetDatasetContentRequestPrivate(const IoTAnalyticsRequest::Action action,
                                   GetDatasetContentRequest * const q);
    GetDatasetContentRequestPrivate(const GetDatasetContentRequestPrivate &other,
                                   GetDatasetContentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDatasetContentRequest)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
