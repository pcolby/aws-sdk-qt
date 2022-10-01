// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKSUMMARYRESPONSE_P_H
#define QTAWS_DESCRIBESTACKSUMMARYRESPONSE_P_H

#include "opsworksresponse_p.h"

namespace QtAws {
namespace OpsWorks {

class DescribeStackSummaryResponse;

class DescribeStackSummaryResponsePrivate : public OpsWorksResponsePrivate {

public:

    explicit DescribeStackSummaryResponsePrivate(DescribeStackSummaryResponse * const q);

    void parseDescribeStackSummaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStackSummaryResponse)
    Q_DISABLE_COPY(DescribeStackSummaryResponsePrivate)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
