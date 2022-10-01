// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTCHANNELASSOCIATIONRESPONSE_P_H
#define QTAWS_DELETEBOTCHANNELASSOCIATIONRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteBotChannelAssociationResponse;

class DeleteBotChannelAssociationResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit DeleteBotChannelAssociationResponsePrivate(DeleteBotChannelAssociationResponse * const q);

    void parseDeleteBotChannelAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteBotChannelAssociationResponse)
    Q_DISABLE_COPY(DeleteBotChannelAssociationResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
