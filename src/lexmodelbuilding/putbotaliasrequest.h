// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBOTALIASREQUEST_H
#define QTAWS_PUTBOTALIASREQUEST_H

#include "lexmodelbuildingrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class PutBotAliasRequestPrivate;

class QTAWSLEXMODELBUILDING_EXPORT PutBotAliasRequest : public LexModelBuildingRequest {

public:
    PutBotAliasRequest(const PutBotAliasRequest &other);
    PutBotAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBotAliasRequest)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
