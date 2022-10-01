// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECEIPTRULEREQUEST_P_H
#define QTAWS_DESCRIBERECEIPTRULEREQUEST_P_H

#include "sesrequest_p.h"
#include "describereceiptrulerequest.h"

namespace QtAws {
namespace Ses {

class DescribeReceiptRuleRequest;

class DescribeReceiptRuleRequestPrivate : public SesRequestPrivate {

public:
    DescribeReceiptRuleRequestPrivate(const SesRequest::Action action,
                                   DescribeReceiptRuleRequest * const q);
    DescribeReceiptRuleRequestPrivate(const DescribeReceiptRuleRequestPrivate &other,
                                   DescribeReceiptRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReceiptRuleRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
