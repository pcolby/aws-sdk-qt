// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCESUMMARYRESPONSE_P_H
#define QTAWS_GETCOMPLIANCESUMMARYRESPONSE_P_H

#include "resourcegroupstaggingresponse_p.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class GetComplianceSummaryResponse;

class GetComplianceSummaryResponsePrivate : public ResourceGroupsTaggingResponsePrivate {

public:

    explicit GetComplianceSummaryResponsePrivate(GetComplianceSummaryResponse * const q);

    void parseGetComplianceSummaryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetComplianceSummaryResponse)
    Q_DISABLE_COPY(GetComplianceSummaryResponsePrivate)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
