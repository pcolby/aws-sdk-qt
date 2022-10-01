// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTALIASREQUEST_H
#define QTAWS_CREATEBOTALIASREQUEST_H

#include "lexmodelsv2request.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateBotAliasRequestPrivate;

class QTAWSLEXMODELSV2_EXPORT CreateBotAliasRequest : public LexModelsV2Request {

public:
    CreateBotAliasRequest(const CreateBotAliasRequest &other);
    CreateBotAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBotAliasRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
