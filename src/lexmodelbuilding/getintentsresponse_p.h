// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTENTSRESPONSE_P_H
#define QTAWS_GETINTENTSRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetIntentsResponse;

class GetIntentsResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetIntentsResponsePrivate(GetIntentsResponse * const q);

    void parseGetIntentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIntentsResponse)
    Q_DISABLE_COPY(GetIntentsResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
