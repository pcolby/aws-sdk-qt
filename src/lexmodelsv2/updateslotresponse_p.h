// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESLOTRESPONSE_P_H
#define QTAWS_UPDATESLOTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class UpdateSlotResponse;

class UpdateSlotResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit UpdateSlotResponsePrivate(UpdateSlotResponse * const q);

    void parseUpdateSlotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSlotResponse)
    Q_DISABLE_COPY(UpdateSlotResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
