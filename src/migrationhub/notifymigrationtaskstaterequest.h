// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NOTIFYMIGRATIONTASKSTATEREQUEST_H
#define QTAWS_NOTIFYMIGRATIONTASKSTATEREQUEST_H

#include "migrationhubrequest.h"

namespace QtAws {
namespace MigrationHub {

class NotifyMigrationTaskStateRequestPrivate;

class QTAWSMIGRATIONHUB_EXPORT NotifyMigrationTaskStateRequest : public MigrationHubRequest {

public:
    NotifyMigrationTaskStateRequest(const NotifyMigrationTaskStateRequest &other);
    NotifyMigrationTaskStateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(NotifyMigrationTaskStateRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
