// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REFRESHSCHEMASREQUEST_H
#define QTAWS_REFRESHSCHEMASREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class RefreshSchemasRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT RefreshSchemasRequest : public DatabaseMigrationRequest {

public:
    RefreshSchemasRequest(const RefreshSchemasRequest &other);
    RefreshSchemasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RefreshSchemasRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
