// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBOTALIASREQUEST_P_H
#define QTAWS_DESCRIBEBOTALIASREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "describebotaliasrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DescribeBotAliasRequest;

class DescribeBotAliasRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DescribeBotAliasRequestPrivate(const LexModelsV2Request::Action action,
                                   DescribeBotAliasRequest * const q);
    DescribeBotAliasRequestPrivate(const DescribeBotAliasRequestPrivate &other,
                                   DescribeBotAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBotAliasRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
