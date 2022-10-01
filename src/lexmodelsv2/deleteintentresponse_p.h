// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTENTRESPONSE_P_H
#define QTAWS_DELETEINTENTRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteIntentResponse;

class DeleteIntentResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DeleteIntentResponsePrivate(DeleteIntentResponse * const q);

    void parseDeleteIntentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteIntentResponse)
    Q_DISABLE_COPY(DeleteIntentResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
