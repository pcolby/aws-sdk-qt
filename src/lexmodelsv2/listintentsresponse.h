// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINTENTSRESPONSE_H
#define QTAWS_LISTINTENTSRESPONSE_H

#include "lexmodelsv2response.h"
#include "listintentsrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListIntentsResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT ListIntentsResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    ListIntentsResponse(const ListIntentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIntentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIntentsResponse)
    Q_DISABLE_COPY(ListIntentsResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
