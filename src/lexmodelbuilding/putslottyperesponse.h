// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSLOTTYPERESPONSE_H
#define QTAWS_PUTSLOTTYPERESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "putslottyperequest.h"

namespace QtAws {
namespace LexModelBuilding {

class PutSlotTypeResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT PutSlotTypeResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    PutSlotTypeResponse(const PutSlotTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutSlotTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutSlotTypeResponse)
    Q_DISABLE_COPY(PutSlotTypeResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
