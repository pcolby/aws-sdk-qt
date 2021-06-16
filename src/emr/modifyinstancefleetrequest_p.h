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

#ifndef QTAWS_MODIFYINSTANCEFLEETREQUEST_P_H
#define QTAWS_MODIFYINSTANCEFLEETREQUEST_P_H

#include "emrrequest_p.h"
#include "modifyinstancefleetrequest.h"

namespace QtAws {
namespace EMR {

class ModifyInstanceFleetRequest;

class QTAWS_EXPORT ModifyInstanceFleetRequestPrivate : public EmrRequestPrivate {

public:
    ModifyInstanceFleetRequestPrivate(const EmrRequest::Action action,
                                   ModifyInstanceFleetRequest * const q);
    ModifyInstanceFleetRequestPrivate(const ModifyInstanceFleetRequestPrivate &other,
                                   ModifyInstanceFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyInstanceFleetRequest)

};

} // namespace EMR
} // namespace QtAws

#endif
