// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEMASREQUEST_P_H
#define QTAWS_DESCRIBESCHEMASREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "describeschemasrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeSchemasRequest;

class DescribeSchemasRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DescribeSchemasRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DescribeSchemasRequest * const q);
    DescribeSchemasRequestPrivate(const DescribeSchemasRequestPrivate &other,
                                   DescribeSchemasRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSchemasRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
