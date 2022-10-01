// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONCOMPONENTSRESPONSE_P_H
#define QTAWS_LISTAPPLICATIONCOMPONENTSRESPONSE_P_H

#include "migrationhubstrategyresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class ListApplicationComponentsResponse;

class ListApplicationComponentsResponsePrivate : public MigrationHubStrategyResponsePrivate {

public:

    explicit ListApplicationComponentsResponsePrivate(ListApplicationComponentsResponse * const q);

    void parseListApplicationComponentsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListApplicationComponentsResponse)
    Q_DISABLE_COPY(ListApplicationComponentsResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
