// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRAWMESSAGECONTENTREQUEST_P_H
#define QTAWS_GETRAWMESSAGECONTENTREQUEST_P_H

#include "workmailmessageflowrequest_p.h"
#include "getrawmessagecontentrequest.h"

namespace QtAws {
namespace WorkMailMessageFlow {

class GetRawMessageContentRequest;

class GetRawMessageContentRequestPrivate : public WorkMailMessageFlowRequestPrivate {

public:
    GetRawMessageContentRequestPrivate(const WorkMailMessageFlowRequest::Action action,
                                   GetRawMessageContentRequest * const q);
    GetRawMessageContentRequestPrivate(const GetRawMessageContentRequestPrivate &other,
                                   GetRawMessageContentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRawMessageContentRequest)

};

} // namespace WorkMailMessageFlow
} // namespace QtAws

#endif
