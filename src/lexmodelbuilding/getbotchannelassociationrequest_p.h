// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTCHANNELASSOCIATIONREQUEST_P_H
#define QTAWS_GETBOTCHANNELASSOCIATIONREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getbotchannelassociationrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotChannelAssociationRequest;

class GetBotChannelAssociationRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetBotChannelAssociationRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetBotChannelAssociationRequest * const q);
    GetBotChannelAssociationRequestPrivate(const GetBotChannelAssociationRequestPrivate &other,
                                   GetBotChannelAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBotChannelAssociationRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
