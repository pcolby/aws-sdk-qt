// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBOTALIASREQUEST_P_H
#define QTAWS_UPDATEBOTALIASREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "updatebotaliasrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateBotAliasRequest;

class UpdateBotAliasRequestPrivate : public LexModelsV2RequestPrivate {

public:
    UpdateBotAliasRequestPrivate(const LexModelsV2Request::Action action,
                                   UpdateBotAliasRequest * const q);
    UpdateBotAliasRequestPrivate(const UpdateBotAliasRequestPrivate &other,
                                   UpdateBotAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBotAliasRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
