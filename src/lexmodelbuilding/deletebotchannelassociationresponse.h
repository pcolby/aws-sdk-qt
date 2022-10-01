// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTCHANNELASSOCIATIONRESPONSE_H
#define QTAWS_DELETEBOTCHANNELASSOCIATIONRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "deletebotchannelassociationrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteBotChannelAssociationResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT DeleteBotChannelAssociationResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    DeleteBotChannelAssociationResponse(const DeleteBotChannelAssociationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBotChannelAssociationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBotChannelAssociationResponse)
    Q_DISABLE_COPY(DeleteBotChannelAssociationResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
