// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORLDGENERATIONJOBRESPONSE_P_H
#define QTAWS_DESCRIBEWORLDGENERATIONJOBRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class DescribeWorldGenerationJobResponse;

class DescribeWorldGenerationJobResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit DescribeWorldGenerationJobResponsePrivate(DescribeWorldGenerationJobResponse * const q);

    void parseDescribeWorldGenerationJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWorldGenerationJobResponse)
    Q_DISABLE_COPY(DescribeWorldGenerationJobResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
