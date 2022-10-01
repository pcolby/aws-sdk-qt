// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBOTALIASESREQUEST_H
#define QTAWS_GETBOTALIASESREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBotAliasesRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetBotAliasesRequest : public LexModelBuildingRequest {

public:
    GetBotAliasesRequest(const GetBotAliasesRequest &other);
    GetBotAliasesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBotAliasesRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
