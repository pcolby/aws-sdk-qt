// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPPHIDETECTIONJOBREQUEST_P_H
#define QTAWS_STOPPHIDETECTIONJOBREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "stopphidetectionjobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class StopPHIDetectionJobRequest;

class StopPHIDetectionJobRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    StopPHIDetectionJobRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   StopPHIDetectionJobRequest * const q);
    StopPHIDetectionJobRequestPrivate(const StopPHIDetectionJobRequestPrivate &other,
                                   StopPHIDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopPHIDetectionJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
