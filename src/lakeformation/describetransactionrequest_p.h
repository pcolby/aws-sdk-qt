// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRANSACTIONREQUEST_P_H
#define QTAWS_DESCRIBETRANSACTIONREQUEST_P_H

#include "lakeformationrequest_p.h"
#include "describetransactionrequest.h"

namespace QtAws {
namespace LakeFormation {

class DescribeTransactionRequest;

class DescribeTransactionRequestPrivate : public LakeFormationRequestPrivate {

public:
    DescribeTransactionRequestPrivate(const LakeFormationRequest::Action action,
                                   DescribeTransactionRequest * const q);
    DescribeTransactionRequestPrivate(const DescribeTransactionRequestPrivate &other,
                                   DescribeTransactionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTransactionRequest)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
