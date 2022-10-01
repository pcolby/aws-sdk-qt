// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSDELETEMESSAGEREQUEST_P_H
#define SQSDELETEMESSAGEREQUEST_P_H

#include "sqsdeletemessagerequest.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

class SqsDeleteMessageRequest;

class SqsDeleteMessageRequestPrivate : public SqsRequestPrivate {

public:
    SqsDeleteMessageRequestPrivate(const SqsRequest::Action action,
                                   SqsDeleteMessageRequest * const q);
    SqsDeleteMessageRequestPrivate(const SqsDeleteMessageRequestPrivate &other,
                                   SqsDeleteMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(SqsDeleteMessageRequest)

};

} // namespace SqsOld
} // namespace QtAws

#endif
