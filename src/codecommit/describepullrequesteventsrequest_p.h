// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPULLREQUESTEVENTSREQUEST_P_H
#define QTAWS_DESCRIBEPULLREQUESTEVENTSREQUEST_P_H

#include "codecommitrequest_p.h"
#include "describepullrequesteventsrequest.h"

namespace QtAws {
namespace CodeCommit {

class DescribePullRequestEventsRequest;

class DescribePullRequestEventsRequestPrivate : public CodeCommitRequestPrivate {

public:
    DescribePullRequestEventsRequestPrivate(const CodeCommitRequest::Action action,
                                   DescribePullRequestEventsRequest * const q);
    DescribePullRequestEventsRequestPrivate(const DescribePullRequestEventsRequestPrivate &other,
                                   DescribePullRequestEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePullRequestEventsRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
