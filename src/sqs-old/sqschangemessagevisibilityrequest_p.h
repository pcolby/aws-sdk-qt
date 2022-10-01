// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSCHANGEMESSAGEVISIBILITYREQUEST_P_H
#define SQSCHANGEMESSAGEVISIBILITYREQUEST_P_H

#include "sqschangemessagevisibilityrequest.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

class SqsChangeMessageVisibilityRequest;

class SqsChangeMessageVisibilityRequestPrivate : public SqsRequestPrivate {

public:
    SqsChangeMessageVisibilityRequestPrivate(const SqsRequest::Action action,
                                   SqsChangeMessageVisibilityRequest * const q);
    SqsChangeMessageVisibilityRequestPrivate(const SqsChangeMessageVisibilityRequestPrivate &other,
                                   SqsChangeMessageVisibilityRequest * const q);

private:
    Q_DECLARE_PUBLIC(SqsChangeMessageVisibilityRequest)

};

} // namespace SqsOld
} // namespace QtAws

#endif
