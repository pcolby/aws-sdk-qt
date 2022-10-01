// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENROLLMENTSTATUSRESPONSE_P_H
#define QTAWS_GETENROLLMENTSTATUSRESPONSE_P_H

#include "computeoptimizerresponse_p.h"

namespace QtAws {
namespace ComputeOptimizer {

class GetEnrollmentStatusResponse;

class GetEnrollmentStatusResponsePrivate : public ComputeOptimizerResponsePrivate {

public:

    explicit GetEnrollmentStatusResponsePrivate(GetEnrollmentStatusResponse * const q);

    void parseGetEnrollmentStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEnrollmentStatusResponse)
    Q_DISABLE_COPY(GetEnrollmentStatusResponsePrivate)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
