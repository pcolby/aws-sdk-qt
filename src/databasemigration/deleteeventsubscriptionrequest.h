// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSUBSCRIPTIONREQUEST_H
#define QTAWS_DELETEEVENTSUBSCRIPTIONREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteEventSubscriptionRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DeleteEventSubscriptionRequest : public DatabaseMigrationRequest {

public:
    DeleteEventSubscriptionRequest(const DeleteEventSubscriptionRequest &other);
    DeleteEventSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventSubscriptionRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
