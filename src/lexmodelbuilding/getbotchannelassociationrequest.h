// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTCHANNELASSOCIATIONREQUEST_H
#define QTAWS_GETBOTCHANNELASSOCIATIONREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotChannelAssociationRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetBotChannelAssociationRequest : public LexModelBuildingRequest {

public:
    GetBotChannelAssociationRequest(const GetBotChannelAssociationRequest &other);
    GetBotChannelAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBotChannelAssociationRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
