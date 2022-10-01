// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCECOMPLIANCESUMMARIESREQUEST_P_H
#define QTAWS_LISTRESOURCECOMPLIANCESUMMARIESREQUEST_P_H

#include "ssmrequest_p.h"
#include "listresourcecompliancesummariesrequest.h"

namespace QtAws {
namespace Ssm {

class ListResourceComplianceSummariesRequest;

class ListResourceComplianceSummariesRequestPrivate : public SsmRequestPrivate {

public:
    ListResourceComplianceSummariesRequestPrivate(const SsmRequest::Action action,
                                   ListResourceComplianceSummariesRequest * const q);
    ListResourceComplianceSummariesRequestPrivate(const ListResourceComplianceSummariesRequestPrivate &other,
                                   ListResourceComplianceSummariesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResourceComplianceSummariesRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
