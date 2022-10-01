// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESLOTRESPONSE_P_H
#define QTAWS_CREATESLOTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateSlotResponse;

class CreateSlotResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit CreateSlotResponsePrivate(CreateSlotResponse * const q);

    void parseCreateSlotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSlotResponse)
    Q_DISABLE_COPY(CreateSlotResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
