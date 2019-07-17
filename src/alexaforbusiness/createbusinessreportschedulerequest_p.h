/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_CREATEBUSINESSREPORTSCHEDULEREQUEST_P_H
#define QTAWS_CREATEBUSINESSREPORTSCHEDULEREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "createbusinessreportschedulerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateBusinessReportScheduleRequest;

class QTAWS_EXPORT CreateBusinessReportScheduleRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    CreateBusinessReportScheduleRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   CreateBusinessReportScheduleRequest * const q);
    CreateBusinessReportScheduleRequestPrivate(const CreateBusinessReportScheduleRequestPrivate &other,
                                   CreateBusinessReportScheduleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBusinessReportScheduleRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
