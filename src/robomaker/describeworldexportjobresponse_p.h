// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORLDEXPORTJOBRESPONSE_P_H
#define QTAWS_DESCRIBEWORLDEXPORTJOBRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class DescribeWorldExportJobResponse;

class DescribeWorldExportJobResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit DescribeWorldExportJobResponsePrivate(DescribeWorldExportJobResponse * const q);

    void parseDescribeWorldExportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWorldExportJobResponse)
    Q_DISABLE_COPY(DescribeWorldExportJobResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
