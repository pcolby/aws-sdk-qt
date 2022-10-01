// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANOMALYRESPONSE_P_H
#define QTAWS_DESCRIBEANOMALYRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeAnomalyResponse;

class DescribeAnomalyResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit DescribeAnomalyResponsePrivate(DescribeAnomalyResponse * const q);

    void parseDescribeAnomalyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAnomalyResponse)
    Q_DISABLE_COPY(DescribeAnomalyResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
