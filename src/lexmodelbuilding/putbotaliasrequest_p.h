// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBOTALIASREQUEST_P_H
#define QTAWS_PUTBOTALIASREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "putbotaliasrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class PutBotAliasRequest;

class PutBotAliasRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    PutBotAliasRequestPrivate(const LexModelBuildingRequest::Action action,
                                   PutBotAliasRequest * const q);
    PutBotAliasRequestPrivate(const PutBotAliasRequestPrivate &other,
                                   PutBotAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutBotAliasRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
