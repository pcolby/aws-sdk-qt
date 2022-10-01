// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHANGEMESSAGEVISIBILITYREQUEST_P_H
#define QTAWS_CHANGEMESSAGEVISIBILITYREQUEST_P_H

#include "sqsrequest_p.h"
#include "changemessagevisibilityrequest.h"

namespace QtAws {
namespace Sqs {

class ChangeMessageVisibilityRequest;

class ChangeMessageVisibilityRequestPrivate : public SqsRequestPrivate {

public:
    ChangeMessageVisibilityRequestPrivate(const SqsRequest::Action action,
                                   ChangeMessageVisibilityRequest * const q);
    ChangeMessageVisibilityRequestPrivate(const ChangeMessageVisibilityRequestPrivate &other,
                                   ChangeMessageVisibilityRequest * const q);

private:
    Q_DECLARE_PUBLIC(ChangeMessageVisibilityRequest)

};

} // namespace Sqs
} // namespace QtAws

#endif
