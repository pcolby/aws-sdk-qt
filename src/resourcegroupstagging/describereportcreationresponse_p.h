// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPORTCREATIONRESPONSE_P_H
#define QTAWS_DESCRIBEREPORTCREATIONRESPONSE_P_H

#include "resourcegroupstaggingresponse_p.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class DescribeReportCreationResponse;

class DescribeReportCreationResponsePrivate : public ResourceGroupsTaggingResponsePrivate {

public:

    explicit DescribeReportCreationResponsePrivate(DescribeReportCreationResponse * const q);

    void parseDescribeReportCreationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReportCreationResponse)
    Q_DISABLE_COPY(DescribeReportCreationResponsePrivate)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
