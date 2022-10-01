// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVERREQUEST_P_H
#define QTAWS_DESCRIBESERVERREQUEST_P_H

#include "transferrequest_p.h"
#include "describeserverrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeServerRequest;

class DescribeServerRequestPrivate : public TransferRequestPrivate {

public:
    DescribeServerRequestPrivate(const TransferRequest::Action action,
                                   DescribeServerRequest * const q);
    DescribeServerRequestPrivate(const DescribeServerRequestPrivate &other,
                                   DescribeServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeServerRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
