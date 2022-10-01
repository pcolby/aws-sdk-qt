// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTALIASESRESPONSE_H
#define QTAWS_LISTBOTALIASESRESPONSE_H

#include "lexmodelsv2response.h"
#include "listbotaliasesrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBotAliasesResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT ListBotAliasesResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    ListBotAliasesResponse(const ListBotAliasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBotAliasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBotAliasesResponse)
    Q_DISABLE_COPY(ListBotAliasesResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
