// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAGREEMENTREQUEST_P_H
#define QTAWS_DESCRIBEAGREEMENTREQUEST_P_H

#include "transferrequest_p.h"
#include "describeagreementrequest.h"

namespace QtAws {
namespace Transfer {

class DescribeAgreementRequest;

class DescribeAgreementRequestPrivate : public TransferRequestPrivate {

public:
    DescribeAgreementRequestPrivate(const TransferRequest::Action action,
                                   DescribeAgreementRequest * const q);
    DescribeAgreementRequestPrivate(const DescribeAgreementRequestPrivate &other,
                                   DescribeAgreementRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAgreementRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
