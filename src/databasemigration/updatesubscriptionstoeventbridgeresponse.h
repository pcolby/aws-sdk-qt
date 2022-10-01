// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBSCRIPTIONSTOEVENTBRIDGERESPONSE_H
#define QTAWS_UPDATESUBSCRIPTIONSTOEVENTBRIDGERESPONSE_H

#include "databasemigrationresponse.h"
#include "updatesubscriptionstoeventbridgerequest.h"

namespace QtAws {
namespace DatabaseMigration {

class UpdateSubscriptionsToEventBridgeResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT UpdateSubscriptionsToEventBridgeResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    UpdateSubscriptionsToEventBridgeResponse(const UpdateSubscriptionsToEventBridgeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSubscriptionsToEventBridgeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSubscriptionsToEventBridgeResponse)
    Q_DISABLE_COPY(UpdateSubscriptionsToEventBridgeResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
