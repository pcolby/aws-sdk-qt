// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENDPOINTREQUEST_P_H
#define QTAWS_CREATEENDPOINTREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "createendpointrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class CreateEndpointRequest;

class CreateEndpointRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    CreateEndpointRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   CreateEndpointRequest * const q);
    CreateEndpointRequestPrivate(const CreateEndpointRequestPrivate &other,
                                   CreateEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEndpointRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
