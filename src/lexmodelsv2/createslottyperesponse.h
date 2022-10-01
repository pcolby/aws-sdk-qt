// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESLOTTYPERESPONSE_H
#define QTAWS_CREATESLOTTYPERESPONSE_H

#include "lexmodelsv2response.h"
#include "createslottyperequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateSlotTypeResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT CreateSlotTypeResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    CreateSlotTypeResponse(const CreateSlotTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSlotTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSlotTypeResponse)
    Q_DISABLE_COPY(CreateSlotTypeResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
