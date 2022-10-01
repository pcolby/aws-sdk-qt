// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTCHANNELASSOCIATIONSREQUEST_P_H
#define QTAWS_GETBOTCHANNELASSOCIATIONSREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "getbotchannelassociationsrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotChannelAssociationsRequest;

class GetBotChannelAssociationsRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    GetBotChannelAssociationsRequestPrivate(const LexModelBuildingRequest::Action action,
                                   GetBotChannelAssociationsRequest * const q);
    GetBotChannelAssociationsRequestPrivate(const GetBotChannelAssociationsRequestPrivate &other,
                                   GetBotChannelAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBotChannelAssociationsRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
