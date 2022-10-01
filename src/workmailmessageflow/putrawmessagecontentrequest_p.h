// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRAWMESSAGECONTENTREQUEST_P_H
#define QTAWS_PUTRAWMESSAGECONTENTREQUEST_P_H

#include "workmailmessageflowrequest_p.h"
#include "putrawmessagecontentrequest.h"

namespace QtAws {
namespace WorkMailMessageFlow {

class PutRawMessageContentRequest;

class PutRawMessageContentRequestPrivate : public WorkMailMessageFlowRequestPrivate {

public:
    PutRawMessageContentRequestPrivate(const WorkMailMessageFlowRequest::Action action,
                                   PutRawMessageContentRequest * const q);
    PutRawMessageContentRequestPrivate(const PutRawMessageContentRequestPrivate &other,
                                   PutRawMessageContentRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRawMessageContentRequest)

};

} // namespace WorkMailMessageFlow
} // namespace QtAws

#endif
