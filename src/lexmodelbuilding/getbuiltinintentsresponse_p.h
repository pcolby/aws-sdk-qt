// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUILTININTENTSRESPONSE_P_H
#define QTAWS_GETBUILTININTENTSRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetBuiltinIntentsResponse;

class GetBuiltinIntentsResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetBuiltinIntentsResponsePrivate(GetBuiltinIntentsResponse * const q);

    void parseGetBuiltinIntentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBuiltinIntentsResponse)
    Q_DISABLE_COPY(GetBuiltinIntentsResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
