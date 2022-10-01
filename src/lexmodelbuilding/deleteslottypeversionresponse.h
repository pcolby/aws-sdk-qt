// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLOTTYPEVERSIONRESPONSE_H
#define QTAWS_DELETESLOTTYPEVERSIONRESPONSE_H

#include "lexmodelbuildingresponse.h"
#include "deleteslottypeversionrequest.h"

namespace QtAws {
namespace LexModelBuilding {

class DeleteSlotTypeVersionResponsePrivate;

class QTAWSLEXMODELBUILDING_EXPORT DeleteSlotTypeVersionResponse : public LexModelBuildingResponse {
    Q_OBJECT

public:
    DeleteSlotTypeVersionResponse(const DeleteSlotTypeVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSlotTypeVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSlotTypeVersionResponse)
    Q_DISABLE_COPY(DeleteSlotTypeVersionResponse)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
