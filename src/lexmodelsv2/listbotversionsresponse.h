// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTVERSIONSRESPONSE_H
#define QTAWS_LISTBOTVERSIONSRESPONSE_H

#include "lexmodelsv2response.h"
#include "listbotversionsrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBotVersionsResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT ListBotVersionsResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    ListBotVersionsResponse(const ListBotVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBotVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBotVersionsResponse)
    Q_DISABLE_COPY(ListBotVersionsResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
