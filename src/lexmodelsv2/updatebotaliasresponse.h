// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBOTALIASRESPONSE_H
#define QTAWS_UPDATEBOTALIASRESPONSE_H

#include "lexmodelsv2response.h"
#include "updatebotaliasrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateBotAliasResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT UpdateBotAliasResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    UpdateBotAliasResponse(const UpdateBotAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBotAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBotAliasResponse)
    Q_DISABLE_COPY(UpdateBotAliasResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
