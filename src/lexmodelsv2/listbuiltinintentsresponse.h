// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILTININTENTSRESPONSE_H
#define QTAWS_LISTBUILTININTENTSRESPONSE_H

#include "lexmodelsv2response.h"
#include "listbuiltinintentsrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBuiltInIntentsResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT ListBuiltInIntentsResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    ListBuiltInIntentsResponse(const ListBuiltInIntentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBuiltInIntentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBuiltInIntentsResponse)
    Q_DISABLE_COPY(ListBuiltInIntentsResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
