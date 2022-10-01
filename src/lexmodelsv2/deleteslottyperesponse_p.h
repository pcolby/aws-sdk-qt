// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESLOTTYPERESPONSE_P_H
#define QTAWS_DELETESLOTTYPERESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteSlotTypeResponse;

class DeleteSlotTypeResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DeleteSlotTypeResponsePrivate(DeleteSlotTypeResponse * const q);

    void parseDeleteSlotTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSlotTypeResponse)
    Q_DISABLE_COPY(DeleteSlotTypeResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
