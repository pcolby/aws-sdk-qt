// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTAGEDEPLOYMENTSRESPONSE_P_H
#define QTAWS_LISTSTAGEDEPLOYMENTSRESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class ListStageDeploymentsResponse;

class ListStageDeploymentsResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit ListStageDeploymentsResponsePrivate(ListStageDeploymentsResponse * const q);

    void parseListStageDeploymentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListStageDeploymentsResponse)
    Q_DISABLE_COPY(ListStageDeploymentsResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
