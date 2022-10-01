// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSLOTTYPESRESPONSE_H
#define QTAWS_LISTSLOTTYPESRESPONSE_H

#include "lexmodelsv2response.h"
#include "listslottypesrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListSlotTypesResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT ListSlotTypesResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    ListSlotTypesResponse(const ListSlotTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSlotTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSlotTypesResponse)
    Q_DISABLE_COPY(ListSlotTypesResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
