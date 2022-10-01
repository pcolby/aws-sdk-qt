// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPHIDETECTIONJOBREQUEST_P_H
#define QTAWS_STARTPHIDETECTIONJOBREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "startphidetectionjobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StartPHIDetectionJobRequest;

class StartPHIDetectionJobRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    StartPHIDetectionJobRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   StartPHIDetectionJobRequest * const q);
    StartPHIDetectionJobRequestPrivate(const StartPHIDetectionJobRequestPrivate &other,
                                   StartPHIDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartPHIDetectionJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
