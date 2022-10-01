// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUILTININTENTRESPONSE_P_H
#define QTAWS_GETBUILTININTENTRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBuiltinIntentResponse;

class GetBuiltinIntentResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetBuiltinIntentResponsePrivate(GetBuiltinIntentResponse * const q);

    void parseGetBuiltinIntentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBuiltinIntentResponse)
    Q_DISABLE_COPY(GetBuiltinIntentResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
