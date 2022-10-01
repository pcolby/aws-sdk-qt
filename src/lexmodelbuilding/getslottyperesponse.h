// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSLOTTYPERESPONSE_H
#define QTAWS_GETSLOTTYPERESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "getslottyperequest.h"

namespace QtAws {
namespace LexModelBuilding {

class GetSlotTypeResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT GetSlotTypeResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    GetSlotTypeResponse(const GetSlotTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSlotTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSlotTypeResponse)
    Q_DISABLE_COPY(GetSlotTypeResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
