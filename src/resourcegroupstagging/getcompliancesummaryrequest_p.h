// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCESUMMARYREQUEST_P_H
#define QTAWS_GETCOMPLIANCESUMMARYREQUEST_P_H

#include "resourcegroupstaggingrequest_p.h"
#include "getcompliancesummaryrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class GetComplianceSummaryRequest;

class GetComplianceSummaryRequestPrivate : public ResourceGroupsTaggingRequestPrivate {

public:
    GetComplianceSummaryRequestPrivate(const ResourceGroupsTaggingRequest::Action action,
                                   GetComplianceSummaryRequest * const q);
    GetComplianceSummaryRequestPrivate(const GetComplianceSummaryRequestPrivate &other,
                                   GetComplianceSummaryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetComplianceSummaryRequest)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
