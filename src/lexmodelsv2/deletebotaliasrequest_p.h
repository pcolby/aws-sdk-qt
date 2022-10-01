// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTALIASREQUEST_P_H
#define QTAWS_DELETEBOTALIASREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "deletebotaliasrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteBotAliasRequest;

class DeleteBotAliasRequestPrivate : public LexModelsV2RequestPrivate {

public:
    DeleteBotAliasRequestPrivate(const LexModelsV2Request::Action action,
                                   DeleteBotAliasRequest * const q);
    DeleteBotAliasRequestPrivate(const DeleteBotAliasRequestPrivate &other,
                                   DeleteBotAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBotAliasRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
