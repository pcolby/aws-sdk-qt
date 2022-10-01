// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONSTATESRESPONSE_P_H
#define QTAWS_LISTAPPLICATIONSTATESRESPONSE_P_H

#include "migrationhubresponse_p.h"

namespace QtAws {
namespace MigrationHub {

class ListApplicationStatesResponse;

class ListApplicationStatesResponsePrivate : public MigrationHubResponsePrivate {

public:

    explicit ListApplicationStatesResponsePrivate(ListApplicationStatesResponse * const q);

    void parseListApplicationStatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListApplicationStatesResponse)
    Q_DISABLE_COPY(ListApplicationStatesResponsePrivate)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
