// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTALIASESREQUEST_P_H
#define QTAWS_GETBOTALIASESREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getbotaliasesrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotAliasesRequest;

class GetBotAliasesRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetBotAliasesRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetBotAliasesRequest * const q);
    GetBotAliasesRequestPrivate(const GetBotAliasesRequestPrivate &other,
                                   GetBotAliasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBotAliasesRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
