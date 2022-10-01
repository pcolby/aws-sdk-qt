// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBOTVERSIONREQUEST_P_H
#define QTAWS_DESCRIBEBOTVERSIONREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "describebotversionrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeBotVersionRequest;

class DescribeBotVersionRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DescribeBotVersionRequestPrivate(const LexModelsV2Request::Action action,
                                   DescribeBotVersionRequest * const q);
    DescribeBotVersionRequestPrivate(const DescribeBotVersionRequestPrivate &other,
                                   DescribeBotVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBotVersionRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
