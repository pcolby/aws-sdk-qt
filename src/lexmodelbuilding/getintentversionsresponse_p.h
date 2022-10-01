// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTENTVERSIONSRESPONSE_P_H
#define QTAWS_GETINTENTVERSIONSRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetIntentVersionsResponse;

class GetIntentVersionsResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetIntentVersionsResponsePrivate(GetIntentVersionsResponse * const q);

    void parseGetIntentVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIntentVersionsResponse)
    Q_DISABLE_COPY(GetIntentVersionsResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
