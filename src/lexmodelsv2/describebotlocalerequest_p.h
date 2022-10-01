// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBOTLOCALEREQUEST_P_H
#define QTAWS_DESCRIBEBOTLOCALEREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "describebotlocalerequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeBotLocaleRequest;

class DescribeBotLocaleRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DescribeBotLocaleRequestPrivate(const LexModelsV2Request::Action action,
                                   DescribeBotLocaleRequest * const q);
    DescribeBotLocaleRequestPrivate(const DescribeBotLocaleRequestPrivate &other,
                                   DescribeBotLocaleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBotLocaleRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
