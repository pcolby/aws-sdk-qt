// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIVERECEIPTRULESETREQUEST_P_H
#define QTAWS_DESCRIBEACTIVERECEIPTRULESETREQUEST_P_H

#include "sesrequest_p.h"
#include "describeactivereceiptrulesetrequest.h"

namespace QtAws {
namespace Ses {

class DescribeActiveReceiptRuleSetRequest;

class DescribeActiveReceiptRuleSetRequestPrivate : public SesRequestPrivate {

public:
    DescribeActiveReceiptRuleSetRequestPrivate(const SesRequest::Action action,
                                   DescribeActiveReceiptRuleSetRequest * const q);
    DescribeActiveReceiptRuleSetRequestPrivate(const DescribeActiveReceiptRuleSetRequestPrivate &other,
                                   DescribeActiveReceiptRuleSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeActiveReceiptRuleSetRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
