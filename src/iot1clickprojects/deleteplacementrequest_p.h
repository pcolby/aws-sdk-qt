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

#ifndef QTAWS_DELETEPLACEMENTREQUEST_P_H
#define QTAWS_DELETEPLACEMENTREQUEST_P_H

#include "iot1clickprojectsrequest_p.h"
#include "deleteplacementrequest.h"

namespace QtAws {
namespace IoT1ClickProjects {

class DeletePlacementRequest;

class QTAWS_EXPORT DeletePlacementRequestPrivate : public IoT1ClickProjectsRequestPrivate {

public:
    DeletePlacementRequestPrivate(const IoT1ClickProjectsRequest::Action action,
                                   DeletePlacementRequest * const q);
    DeletePlacementRequestPrivate(const DeletePlacementRequestPrivate &other,
                                   DeletePlacementRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePlacementRequest)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
