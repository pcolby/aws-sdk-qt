// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBOTALIASRESPONSE_H
#define QTAWS_CREATEBOTALIASRESPONSE_H

#include "lexmodelsv2response.h"
#include "createbotaliasrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateBotAliasResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT CreateBotAliasResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    CreateBotAliasResponse(const CreateBotAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBotAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBotAliasResponse)
    Q_DISABLE_COPY(CreateBotAliasResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
