// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUILTINSLOTTYPESRESPONSE_H
#define QTAWS_GETBUILTINSLOTTYPESRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "getbuiltinslottypesrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBuiltinSlotTypesResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetBuiltinSlotTypesResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    GetBuiltinSlotTypesResponse(const GetBuiltinSlotTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBuiltinSlotTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBuiltinSlotTypesResponse)
    Q_DISABLE_COPY(GetBuiltinSlotTypesResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
