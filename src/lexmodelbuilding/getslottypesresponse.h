// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSLOTTYPESRESPONSE_H
#define QTAWS_GETSLOTTYPESRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "getslottypesrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetSlotTypesResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetSlotTypesResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    GetSlotTypesResponse(const GetSlotTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSlotTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSlotTypesResponse)
    Q_DISABLE_COPY(GetSlotTypesResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
