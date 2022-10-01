// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REFRESHSCHEMASREQUEST_P_H
#define QTAWS_REFRESHSCHEMASREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "refreshschemasrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class RefreshSchemasRequest;

class RefreshSchemasRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    RefreshSchemasRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   RefreshSchemasRequest * const q);
    RefreshSchemasRequestPrivate(const RefreshSchemasRequestPrivate &other,
                                   RefreshSchemasRequest * const q);

private:
    Q_DECLARE_PUBLIC(RefreshSchemasRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
