// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTCHANNELASSOCIATIONRESPONSE_P_H
#define QTAWS_GETBOTCHANNELASSOCIATIONRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotChannelAssociationResponse;

class GetBotChannelAssociationResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetBotChannelAssociationResponsePrivate(GetBotChannelAssociationResponse * const q);

    void parseGetBotChannelAssociationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBotChannelAssociationResponse)
    Q_DISABLE_COPY(GetBotChannelAssociationResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
