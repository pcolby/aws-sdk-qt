/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ADDINSTANCEFLEETREQUEST_P_H
#define QTAWS_ADDINSTANCEFLEETREQUEST_P_H

#include "emr_p.h"
#include "addinstancefleetrequest.h"

namespace AWS {

namespace EMR {

class AddInstanceFleetRequest;

class QTAWS_EXPORT AddInstanceFleetRequestPrivate : public EMRPrivate {

public:
    AddInstanceFleetRequestPrivate(const EMR::Action action,
                                   AddInstanceFleetRequest * const q);
    AddInstanceFleetRequestPrivate(const AddInstanceFleetRequestPrivate &other,
                                   AddInstanceFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddInstanceFleetRequest)

};

} // namespace EMR
} // namespace AWS

#endif
