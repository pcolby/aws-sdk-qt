// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESLOTRESPONSE_H
#define QTAWS_CREATESLOTRESPONSE_H

#include "lexmodelsv2response.h"
#include "createslotrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateSlotResponsePrivate;

class QTAWSLEXMODELSV2_EXPORT CreateSlotResponse : public LexModelsV2Response {
    Q_OBJECT

public:
    CreateSlotResponse(const CreateSlotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSlotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSlotResponse)
    Q_DISABLE_COPY(CreateSlotResponse)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
