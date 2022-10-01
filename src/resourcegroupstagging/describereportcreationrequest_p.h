// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPORTCREATIONREQUEST_P_H
#define QTAWS_DESCRIBEREPORTCREATIONREQUEST_P_H

#include "resourcegroupstaggingrequest_p.h"
#include "describereportcreationrequest.h"

namespace QtAws {
namespace ResourceGroupsTagging {

class DescribeReportCreationRequest;

class DescribeReportCreationRequestPrivate : public ResourceGroupsTaggingRequestPrivate {

public:
    DescribeReportCreationRequestPrivate(const ResourceGroupsTaggingRequest::Action action,
                                   DescribeReportCreationRequest * const q);
    DescribeReportCreationRequestPrivate(const DescribeReportCreationRequestPrivate &other,
                                   DescribeReportCreationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReportCreationRequest)

};

} // namespace ResourceGroupsTagging
} // namespace QtAws

#endif
