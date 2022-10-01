// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITIESDETECTIONV2JOBRESPONSE_P_H
#define QTAWS_DESCRIBEENTITIESDETECTIONV2JOBRESPONSE_P_H

#include "comprehendmedicalresponse_p.h"

namespace QtAws {
namespace ComprehendMedical {

class DescribeEntitiesDetectionV2JobResponse;

class DescribeEntitiesDetectionV2JobResponsePrivate : public ComprehendMedicalResponsePrivate {

public:

    explicit DescribeEntitiesDetectionV2JobResponsePrivate(DescribeEntitiesDetectionV2JobResponse * const q);

    void parseDescribeEntitiesDetectionV2JobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEntitiesDetectionV2JobResponse)
    Q_DISABLE_COPY(DescribeEntitiesDetectionV2JobResponsePrivate)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
