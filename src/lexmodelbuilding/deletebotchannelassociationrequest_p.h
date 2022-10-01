// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTCHANNELASSOCIATIONREQUEST_P_H
#define QTAWS_DELETEBOTCHANNELASSOCIATIONREQUEST_P_H

#include "lexmodelbuildingrequest_p.h"
#include "deletebotchannelassociationrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteBotChannelAssociationRequest;

class DeleteBotChannelAssociationRequestPrivate : public LexModelBuildingRequestPrivate {

public:
    DeleteBotChannelAssociationRequestPrivate(const LexModelBuildingRequest::Action action,
                                   DeleteBotChannelAssociationRequest * const q);
    DeleteBotChannelAssociationRequestPrivate(const DeleteBotChannelAssociationRequestPrivate &other,
                                   DeleteBotChannelAssociationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBotChannelAssociationRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
