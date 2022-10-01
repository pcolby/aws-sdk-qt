// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOSTKEYREQUEST_P_H
#define QTAWS_DESCRIBEHOSTKEYREQUEST_P_H

#include "transferrequest_p.h"
#include "describehostkeyrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeHostKeyRequest;

class DescribeHostKeyRequestPrivate : public TransferRequestPrivate {

public:
    DescribeHostKeyRequestPrivate(const TransferRequest::Action action,
                                   DescribeHostKeyRequest * const q);
    DescribeHostKeyRequestPrivate(const DescribeHostKeyRequestPrivate &other,
                                   DescribeHostKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeHostKeyRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
