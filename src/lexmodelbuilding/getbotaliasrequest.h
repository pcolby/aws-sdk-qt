// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTALIASREQUEST_H
#define QTAWS_GETBOTALIASREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotAliasRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetBotAliasRequest : public LexModelBuildingRequest {

public:
    GetBotAliasRequest(const GetBotAliasRequest &other);
    GetBotAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBotAliasRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
