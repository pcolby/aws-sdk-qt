// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSIGHTRESPONSE_P_H
#define QTAWS_DESCRIBEINSIGHTRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeInsightResponse;

class DescribeInsightResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit DescribeInsightResponsePrivate(DescribeInsightResponse * const q);

    void parseDescribeInsightResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInsightResponse)
    Q_DISABLE_COPY(DescribeInsightResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
