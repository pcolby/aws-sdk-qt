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

#ifndef QTAWS_STARTENTITIESDETECTIONV2JOBREQUEST_P_H
#define QTAWS_STARTENTITIESDETECTIONV2JOBREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "startentitiesdetectionv2jobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StartEntitiesDetectionV2JobRequest;

class StartEntitiesDetectionV2JobRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    StartEntitiesDetectionV2JobRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   StartEntitiesDetectionV2JobRequest * const q);
    StartEntitiesDetectionV2JobRequestPrivate(const StartEntitiesDetectionV2JobRequestPrivate &other,
                                   StartEntitiesDetectionV2JobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartEntitiesDetectionV2JobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
