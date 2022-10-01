// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSIGHTRULESREQUEST_P_H
#define QTAWS_DELETEINSIGHTRULESREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "deleteinsightrulesrequest.h"

namespace QtAws {
namespace CloudWatch {

class DeleteInsightRulesRequest;

class DeleteInsightRulesRequestPrivate : public CloudWatchRequestPrivate {

public:
    DeleteInsightRulesRequestPrivate(const CloudWatchRequest::Action action,
                                   DeleteInsightRulesRequest * const q);
    DeleteInsightRulesRequestPrivate(const DeleteInsightRulesRequestPrivate &other,
                                   DeleteInsightRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInsightRulesRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
