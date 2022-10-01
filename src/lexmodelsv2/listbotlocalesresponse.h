// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBOTLOCALESRESPONSE_H
#define QTAWS_LISTBOTLOCALESRESPONSE_H

#include "lexmodelsv2response.h"
#include "listbotlocalesrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBotLocalesResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT ListBotLocalesResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    ListBotLocalesResponse(const ListBotLocalesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBotLocalesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBotLocalesResponse)
    Q_DISABLE_COPY(ListBotLocalesResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
