// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENROLLMENTSTATUSESFORORGANIZATIONRESPONSE_P_H
#define QTAWS_GETENROLLMENTSTATUSESFORORGANIZATIONRESPONSE_P_H

#include "computeoptimizerresponse_p.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEnrollmentStatusesForOrganizationResponse;

class GetEnrollmentStatusesForOrganizationResponsePrivate : public ComputeOptimizerResponsePrivate {

public:

    explicit GetEnrollmentStatusesForOrganizationResponsePrivate(GetEnrollmentStatusesForOrganizationResponse * const q);

    void parseGetEnrollmentStatusesForOrganizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEnrollmentStatusesForOrganizationResponse)
    Q_DISABLE_COPY(GetEnrollmentStatusesForOrganizationResponsePrivate)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
