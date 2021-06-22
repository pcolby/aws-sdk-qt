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

#ifndef QTAWS_CREATEDATASETREQUEST_P_H
#define QTAWS_CREATEDATASETREQUEST_P_H

#include "quicksightrequest_p.h"
#include "createdatasetrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateDataSetRequest;

class CreateDataSetRequestPrivate : public QuickSightRequestPrivate {

public:
    CreateDataSetRequestPrivate(const QuickSightRequest::Action action,
                                   CreateDataSetRequest * const q);
    CreateDataSetRequestPrivate(const CreateDataSetRequestPrivate &other,
                                   CreateDataSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDataSetRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
