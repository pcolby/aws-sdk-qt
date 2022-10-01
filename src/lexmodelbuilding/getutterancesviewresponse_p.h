// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUTTERANCESVIEWRESPONSE_P_H
#define QTAWS_GETUTTERANCESVIEWRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetUtterancesViewResponse;

class GetUtterancesViewResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetUtterancesViewResponsePrivate(GetUtterancesViewResponse * const q);

    void parseGetUtterancesViewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUtterancesViewResponse)
    Q_DISABLE_COPY(GetUtterancesViewResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
