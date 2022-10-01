// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLOTRESPONSE_P_H
#define QTAWS_DELETESLOTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteSlotResponse;

class DeleteSlotResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DeleteSlotResponsePrivate(DeleteSlotResponse * const q);

    void parseDeleteSlotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSlotResponse)
    Q_DISABLE_COPY(DeleteSlotResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
