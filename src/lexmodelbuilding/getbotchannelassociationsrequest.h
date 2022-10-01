// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTCHANNELASSOCIATIONSREQUEST_H
#define QTAWS_GETBOTCHANNELASSOCIATIONSREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotChannelAssociationsRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetBotChannelAssociationsRequest : public LexModelBuildingRequest {

public:
    GetBotChannelAssociationsRequest(const GetBotChannelAssociationsRequest &other);
    GetBotChannelAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBotChannelAssociationsRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
