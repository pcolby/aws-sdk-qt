// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPHIDETECTIONJOBRESPONSE_P_H
#define QTAWS_DESCRIBEPHIDETECTIONJOBRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class DescribePHIDetectionJobResponse;

class DescribePHIDetectionJobResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit DescribePHIDetectionJobResponsePrivate(DescribePHIDetectionJobResponse * const q);

    void parseDescribePHIDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePHIDetectionJobResponse)
    Q_DISABLE_COPY(DescribePHIDetectionJobResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
