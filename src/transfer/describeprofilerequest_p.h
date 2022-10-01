// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROFILEREQUEST_P_H
#define QTAWS_DESCRIBEPROFILEREQUEST_P_H

#include "transferrequest_p.h"
#include "describeprofilerequest.h"

namespace QtAws {
namespace Transfer {

class DescribeProfileRequest;

class DescribeProfileRequestPrivate : public TransferRequestPrivate {

public:
    DescribeProfileRequestPrivate(const TransferRequest::Action action,
                                   DescribeProfileRequest * const q);
    DescribeProfileRequestPrivate(const DescribeProfileRequestPrivate &other,
                                   DescribeProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProfileRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
