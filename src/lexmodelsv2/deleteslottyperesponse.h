// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLOTTYPERESPONSE_H
#define QTAWS_DELETESLOTTYPERESPONSE_H

#include "lexmodelsv2response.h"
#include "deleteslottyperequest.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteSlotTypeResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT DeleteSlotTypeResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    DeleteSlotTypeResponse(const DeleteSlotTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSlotTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSlotTypeResponse)
    Q_DISABLE_COPY(DeleteSlotTypeResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
