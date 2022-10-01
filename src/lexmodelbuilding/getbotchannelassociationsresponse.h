// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTCHANNELASSOCIATIONSRESPONSE_H
#define QTAWS_GETBOTCHANNELASSOCIATIONSRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "getbotchannelassociationsrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotChannelAssociationsResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetBotChannelAssociationsResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    GetBotChannelAssociationsResponse(const GetBotChannelAssociationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBotChannelAssociationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBotChannelAssociationsResponse)
    Q_DISABLE_COPY(GetBotChannelAssociationsResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
