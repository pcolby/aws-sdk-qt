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

#ifndef QTAWS_STOPENTITIESDETECTIONV2JOBREQUEST_P_H
#define QTAWS_STOPENTITIESDETECTIONV2JOBREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "stopentitiesdetectionv2jobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StopEntitiesDetectionV2JobRequest;

class StopEntitiesDetectionV2JobRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    StopEntitiesDetectionV2JobRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   StopEntitiesDetectionV2JobRequest * const q);
    StopEntitiesDetectionV2JobRequestPrivate(const StopEntitiesDetectionV2JobRequestPrivate &other,
                                   StopEntitiesDetectionV2JobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopEntitiesDetectionV2JobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
