// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTCONNECTIONREQUEST_P_H
#define QTAWS_TESTCONNECTIONREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "testconnectionrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class TestConnectionRequest;

class TestConnectionRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    TestConnectionRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   TestConnectionRequest * const q);
    TestConnectionRequestPrivate(const TestConnectionRequestPrivate &other,
                                   TestConnectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestConnectionRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
