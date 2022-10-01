// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILTINSLOTTYPESRESPONSE_H
#define QTAWS_LISTBUILTINSLOTTYPESRESPONSE_H

#include "lexmodelsv2response.h"
#include "listbuiltinslottypesrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class ListBuiltInSlotTypesResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT ListBuiltInSlotTypesResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    ListBuiltInSlotTypesResponse(const ListBuiltInSlotTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBuiltInSlotTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBuiltInSlotTypesResponse)
    Q_DISABLE_COPY(ListBuiltInSlotTypesResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
