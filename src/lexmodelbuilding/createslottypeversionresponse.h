// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESLOTTYPEVERSIONRESPONSE_H
#define QTAWS_CREATESLOTTYPEVERSIONRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "createslottypeversionrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class CreateSlotTypeVersionResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT CreateSlotTypeVersionResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    CreateSlotTypeVersionResponse(const CreateSlotTypeVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSlotTypeVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSlotTypeVersionResponse)
    Q_DISABLE_COPY(CreateSlotTypeVersionResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
