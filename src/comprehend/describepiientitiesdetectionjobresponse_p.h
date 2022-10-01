// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPIIENTITIESDETECTIONJOBRESPONSE_P_H
#define QTAWS_DESCRIBEPIIENTITIESDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DescribePiiEntitiesDetectionJobResponse;

class DescribePiiEntitiesDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DescribePiiEntitiesDetectionJobResponsePrivate(DescribePiiEntitiesDetectionJobResponse * const q);

    void parseDescribePiiEntitiesDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePiiEntitiesDetectionJobResponse)
    Q_DISABLE_COPY(DescribePiiEntitiesDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
