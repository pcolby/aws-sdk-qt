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

#ifndef QTAWS_CREATEDELIVERABILITYTESTREPORTREQUEST_P_H
#define QTAWS_CREATEDELIVERABILITYTESTREPORTREQUEST_P_H

#include "sesv2request_p.h"
#include "createdeliverabilitytestreportrequest.h"

namespace QtAws {
namespace SESV2 {

class CreateDeliverabilityTestReportRequest;

class CreateDeliverabilityTestReportRequestPrivate : public Sesv2RequestPrivate {

public:
    CreateDeliverabilityTestReportRequestPrivate(const Sesv2Request::Action action,
                                   CreateDeliverabilityTestReportRequest * const q);
    CreateDeliverabilityTestReportRequestPrivate(const CreateDeliverabilityTestReportRequestPrivate &other,
                                   CreateDeliverabilityTestReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDeliverabilityTestReportRequest)

};

} // namespace SESV2
} // namespace QtAws

#endif
