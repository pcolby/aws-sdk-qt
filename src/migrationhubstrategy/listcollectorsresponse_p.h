// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOLLECTORSRESPONSE_P_H
#define QTAWS_LISTCOLLECTORSRESPONSE_P_H

#include "migrationhubstrategyresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class ListCollectorsResponse;

class ListCollectorsResponsePrivate : public MigrationHubStrategyResponsePrivate {

public:

    explicit ListCollectorsResponsePrivate(ListCollectorsResponse * const q);

    void parseListCollectorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCollectorsResponse)
    Q_DISABLE_COPY(ListCollectorsResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
