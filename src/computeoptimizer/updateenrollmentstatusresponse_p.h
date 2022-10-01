// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENROLLMENTSTATUSRESPONSE_P_H
#define QTAWS_UPDATEENROLLMENTSTATUSRESPONSE_P_H

#include "computeoptimizerresponse_p.h"

namespace QtAws {
namespace ComputeOptimizer {

class UpdateEnrollmentStatusResponse;

class UpdateEnrollmentStatusResponsePrivate : public ComputeOptimizerResponsePrivate {

public:

    explicit UpdateEnrollmentStatusResponsePrivate(UpdateEnrollmentStatusResponse * const q);

    void parseUpdateEnrollmentStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEnrollmentStatusResponse)
    Q_DISABLE_COPY(UpdateEnrollmentStatusResponsePrivate)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
