// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTALIASREQUEST_P_H
#define QTAWS_DELETEBOTALIASREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "deletebotaliasrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteBotAliasRequest;

class DeleteBotAliasRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    DeleteBotAliasRequestPrivate(const LexModelBuildingRequest::Action action,
                                   DeleteBotAliasRequest * const q);
    DeleteBotAliasRequestPrivate(const DeleteBotAliasRequestPrivate &other,
                                   DeleteBotAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBotAliasRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
