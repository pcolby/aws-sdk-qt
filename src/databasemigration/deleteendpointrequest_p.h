// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTREQUEST_P_H
#define QTAWS_DELETEENDPOINTREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "deleteendpointrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteEndpointRequest;

class DeleteEndpointRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    DeleteEndpointRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   DeleteEndpointRequest * const q);
    DeleteEndpointRequestPrivate(const DeleteEndpointRequestPrivate &other,
                                   DeleteEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEndpointRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
