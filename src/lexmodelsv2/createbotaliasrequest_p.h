// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTALIASREQUEST_P_H
#define QTAWS_CREATEBOTALIASREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "createbotaliasrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateBotAliasRequest;

class CreateBotAliasRequestPrivate : public LexModelsV2RequestPrivate {

public:
    CreateBotAliasRequestPrivate(const LexModelsV2Request::Action action,
                                   CreateBotAliasRequest * const q);
    CreateBotAliasRequestPrivate(const CreateBotAliasRequestPrivate &other,
                                   CreateBotAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBotAliasRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
