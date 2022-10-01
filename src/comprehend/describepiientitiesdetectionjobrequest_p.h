// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPIIENTITIESDETECTIONJOBREQUEST_P_H
#define QTAWS_DESCRIBEPIIENTITIESDETECTIONJOBREQUEST_P_H

#include "comprehendrequest_p.h"
#include "describepiientitiesdetectionjobrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribePiiEntitiesDetectionJobRequest;

class DescribePiiEntitiesDetectionJobRequestPrivate : public ComprehendRequestPrivate {

public:
    DescribePiiEntitiesDetectionJobRequestPrivate(const ComprehendRequest::Action action,
                                   DescribePiiEntitiesDetectionJobRequest * const q);
    DescribePiiEntitiesDetectionJobRequestPrivate(const DescribePiiEntitiesDetectionJobRequestPrivate &other,
                                   DescribePiiEntitiesDetectionJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePiiEntitiesDetectionJobRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
