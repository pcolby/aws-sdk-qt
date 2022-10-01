// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTCHANNELASSOCIATIONRESPONSE_H
#define QTAWS_GETBOTCHANNELASSOCIATIONRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "getbotchannelassociationrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotChannelAssociationResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetBotChannelAssociationResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    GetBotChannelAssociationResponse(const GetBotChannelAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBotChannelAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBotChannelAssociationResponse)
    Q_DISABLE_COPY(GetBotChannelAssociationResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
