// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBSCRIPTIONSTOEVENTBRIDGERESPONSE_P_H
#define QTAWS_UPDATESUBSCRIPTIONSTOEVENTBRIDGERESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class UpdateSubscriptionsToEventBridgeResponse;

class UpdateSubscriptionsToEventBridgeResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit UpdateSubscriptionsToEventBridgeResponsePrivate(UpdateSubscriptionsToEventBridgeResponse * const q);

    void parseUpdateSubscriptionsToEventBridgeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSubscriptionsToEventBridgeResponse)
    Q_DISABLE_COPY(UpdateSubscriptionsToEventBridgeResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
