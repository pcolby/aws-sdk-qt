// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINTENTREQUEST_P_H
#define QTAWS_DESCRIBEINTENTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "describeintentrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeIntentRequest;

class DescribeIntentRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DescribeIntentRequestPrivate(const LexModelsV2Request::Action action,
                                   DescribeIntentRequest * const q);
    DescribeIntentRequestPrivate(const DescribeIntentRequestPrivate &other,
                                   DescribeIntentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIntentRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
