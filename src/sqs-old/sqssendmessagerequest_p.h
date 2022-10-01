// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSSENDMESSAGEREQUEST_P_H
#define SQSSENDMESSAGEREQUEST_P_H

#include "sqssendmessagerequest.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SqsOld {

class SqsSendMessageRequest;

class SqsSendMessageRequestPrivate : public SqsRequestPrivate {

public:
    SqsSendMessageRequestPrivate(const SqsRequest::Action action,
                                   SqsSendMessageRequest * const q);
    SqsSendMessageRequestPrivate(const SqsSendMessageRequestPrivate &other,
                                   SqsSendMessageRequest * const q);

private:
    Q_DECLARE_PUBLIC(SqsSendMessageRequest)

};

} // namespace SqsOld
} // namespace QtAws

#endif
