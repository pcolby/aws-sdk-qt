// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
