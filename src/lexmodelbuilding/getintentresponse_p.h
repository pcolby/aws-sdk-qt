// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTENTRESPONSE_P_H
#define QTAWS_GETINTENTRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetIntentResponse;

class GetIntentResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetIntentResponsePrivate(GetIntentResponse * const q);

    void parseGetIntentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIntentResponse)
    Q_DISABLE_COPY(GetIntentResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
