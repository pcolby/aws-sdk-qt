// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBOTCHANNELASSOCIATIONREQUEST_H
#define QTAWS_DELETEBOTCHANNELASSOCIATIONREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteBotChannelAssociationRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT DeleteBotChannelAssociationRequest : public LexModelBuildingRequest {

public:
    DeleteBotChannelAssociationRequest(const DeleteBotChannelAssociationRequest &other);
    DeleteBotChannelAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBotChannelAssociationRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
