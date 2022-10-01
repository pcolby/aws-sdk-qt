// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECEIPTRULESETREQUEST_P_H
#define QTAWS_DESCRIBERECEIPTRULESETREQUEST_P_H

#include "sesrequest_p.h"
#include "describereceiptrulesetrequest.h"

namespace QtAws {
namespace Ses {

class DescribeReceiptRuleSetRequest;

class DescribeReceiptRuleSetRequestPrivate : public SesRequestPrivate {

public:
    DescribeReceiptRuleSetRequestPrivate(const SesRequest::Action action,
                                   DescribeReceiptRuleSetRequest * const q);
    DescribeReceiptRuleSetRequestPrivate(const DescribeReceiptRuleSetRequestPrivate &other,
                                   DescribeReceiptRuleSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReceiptRuleSetRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
