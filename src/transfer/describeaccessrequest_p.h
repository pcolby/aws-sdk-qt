// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCESSREQUEST_P_H
#define QTAWS_DESCRIBEACCESSREQUEST_P_H

#include "transferrequest_p.h"
#include "describeaccessrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeAccessRequest;

class DescribeAccessRequestPrivate : public TransferRequestPrivate {

public:
    DescribeAccessRequestPrivate(const TransferRequest::Action action,
                                   DescribeAccessRequest * const q);
    DescribeAccessRequestPrivate(const DescribeAccessRequestPrivate &other,
                                   DescribeAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccessRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
