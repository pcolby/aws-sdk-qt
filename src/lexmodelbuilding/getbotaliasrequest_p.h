// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTALIASREQUEST_P_H
#define QTAWS_GETBOTALIASREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getbotaliasrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotAliasRequest;

class GetBotAliasRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetBotAliasRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetBotAliasRequest * const q);
    GetBotAliasRequestPrivate(const GetBotAliasRequestPrivate &other,
                                   GetBotAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBotAliasRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
