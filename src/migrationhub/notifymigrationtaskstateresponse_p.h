// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYMIGRATIONTASKSTATERESPONSE_P_H
#define QTAWS_NOTIFYMIGRATIONTASKSTATERESPONSE_P_H

#include "migrationhubresponse_p.h"

namespace QtAws {
namespace MigrationHub {

class NotifyMigrationTaskStateResponse;

class NotifyMigrationTaskStateResponsePrivate : public MigrationHubResponsePrivate {

public:

    explicit NotifyMigrationTaskStateResponsePrivate(NotifyMigrationTaskStateResponse * const q);

    void parseNotifyMigrationTaskStateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(NotifyMigrationTaskStateResponse)
    Q_DISABLE_COPY(NotifyMigrationTaskStateResponsePrivate)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
