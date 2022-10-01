// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBOTREQUEST_P_H
#define QTAWS_DESCRIBEBOTREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "describebotrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeBotRequest;

class DescribeBotRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DescribeBotRequestPrivate(const LexModelsV2Request::Action action,
                                   DescribeBotRequest * const q);
    DescribeBotRequestPrivate(const DescribeBotRequestPrivate &other,
                                   DescribeBotRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBotRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
