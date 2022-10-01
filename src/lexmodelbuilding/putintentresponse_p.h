// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINTENTRESPONSE_P_H
#define QTAWS_PUTINTENTRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class PutIntentResponse;

class PutIntentResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit PutIntentResponsePrivate(PutIntentResponse * const q);

    void parsePutIntentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutIntentResponse)
    Q_DISABLE_COPY(PutIntentResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
