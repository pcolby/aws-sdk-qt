// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPHIDETECTIONJOBREQUEST_P_H
#define QTAWS_DESCRIBEPHIDETECTIONJOBREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "describephidetectionjobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DescribePHIDetectionJobRequest;

class DescribePHIDetectionJobRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    DescribePHIDetectionJobRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   DescribePHIDetectionJobRequest * const q);
    DescribePHIDetectionJobRequestPrivate(const DescribePHIDetectionJobRequestPrivate &other,
                                   DescribePHIDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePHIDetectionJobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
