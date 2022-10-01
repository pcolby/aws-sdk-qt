// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
