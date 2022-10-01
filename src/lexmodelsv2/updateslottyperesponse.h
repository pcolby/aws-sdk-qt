// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESLOTTYPERESPONSE_H
#define QTAWS_UPDATESLOTTYPERESPONSE_H

#include "lexmodelsv2response.h"
#include "updateslottyperequest.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateSlotTypeResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT UpdateSlotTypeResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    UpdateSlotTypeResponse(const UpdateSlotTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSlotTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSlotTypeResponse)
    Q_DISABLE_COPY(UpdateSlotTypeResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
