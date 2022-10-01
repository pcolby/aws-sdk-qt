// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSLOTTYPEVERSIONSRESPONSE_H
#define QTAWS_GETSLOTTYPEVERSIONSRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "getslottypeversionsrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetSlotTypeVersionsResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetSlotTypeVersionsResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    GetSlotTypeVersionsResponse(const GetSlotTypeVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSlotTypeVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSlotTypeVersionsResponse)
    Q_DISABLE_COPY(GetSlotTypeVersionsResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
