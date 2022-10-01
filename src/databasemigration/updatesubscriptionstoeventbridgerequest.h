// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBSCRIPTIONSTOEVENTBRIDGEREQUEST_H
#define QTAWS_UPDATESUBSCRIPTIONSTOEVENTBRIDGEREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class UpdateSubscriptionsToEventBridgeRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT UpdateSubscriptionsToEventBridgeRequest : public DatabaseMigrationRequest {

public:
    UpdateSubscriptionsToEventBridgeRequest(const UpdateSubscriptionsToEventBridgeRequest &other);
    UpdateSubscriptionsToEventBridgeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSubscriptionsToEventBridgeRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
