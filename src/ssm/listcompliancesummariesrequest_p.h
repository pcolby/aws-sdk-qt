// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPLIANCESUMMARIESREQUEST_P_H
#define QTAWS_LISTCOMPLIANCESUMMARIESREQUEST_P_H

#include "ssmrequest_p.h"
#include "listcompliancesummariesrequest.h"

namespace QtAws {
namespace Ssm {

class ListComplianceSummariesRequest;

class ListComplianceSummariesRequestPrivate : public SsmRequestPrivate {

public:
    ListComplianceSummariesRequestPrivate(const SsmRequest::Action action,
                                   ListComplianceSummariesRequest * const q);
    ListComplianceSummariesRequestPrivate(const ListComplianceSummariesRequestPrivate &other,
                                   ListComplianceSummariesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListComplianceSummariesRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
