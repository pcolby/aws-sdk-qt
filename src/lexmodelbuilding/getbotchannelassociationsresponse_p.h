// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTCHANNELASSOCIATIONSRESPONSE_P_H
#define QTAWS_GETBOTCHANNELASSOCIATIONSRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotChannelAssociationsResponse;

class GetBotChannelAssociationsResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetBotChannelAssociationsResponsePrivate(GetBotChannelAssociationsResponse * const q);

    void parseGetBotChannelAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBotChannelAssociationsResponse)
    Q_DISABLE_COPY(GetBotChannelAssociationsResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
