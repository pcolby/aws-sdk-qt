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

#ifndef QTAWS_CREATEDASHBOARDREQUEST_P_H
#define QTAWS_CREATEDASHBOARDREQUEST_P_H

#include "quicksightrequest_p.h"
#include "createdashboardrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateDashboardRequest;

class QTAWS_EXPORT CreateDashboardRequestPrivate : public QuickSightRequestPrivate {

public:
    CreateDashboardRequestPrivate(const QuickSightRequest::Action action,
                                   CreateDashboardRequest * const q);
    CreateDashboardRequestPrivate(const CreateDashboardRequestPrivate &other,
                                   CreateDashboardRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDashboardRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
