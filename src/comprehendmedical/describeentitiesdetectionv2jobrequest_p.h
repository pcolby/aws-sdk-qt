// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITIESDETECTIONV2JOBREQUEST_P_H
#define QTAWS_DESCRIBEENTITIESDETECTIONV2JOBREQUEST_P_H

#include "comprehendmedicalrequest_p.h"
#include "describeentitiesdetectionv2jobrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DescribeEntitiesDetectionV2JobRequest;

class DescribeEntitiesDetectionV2JobRequestPrivate : public ComprehendMedicalRequestPrivate {

public:
    DescribeEntitiesDetectionV2JobRequestPrivate(const ComprehendMedicalRequest::Action action,
                                   DescribeEntitiesDetectionV2JobRequest * const q);
    DescribeEntitiesDetectionV2JobRequestPrivate(const DescribeEntitiesDetectionV2JobRequestPrivate &other,
                                   DescribeEntitiesDetectionV2JobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEntitiesDetectionV2JobRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
