// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYENDPOINTREQUEST_P_H
#define QTAWS_MODIFYENDPOINTREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "modifyendpointrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ModifyEndpointRequest;

class ModifyEndpointRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    ModifyEndpointRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   ModifyEndpointRequest * const q);
    ModifyEndpointRequestPrivate(const ModifyEndpointRequestPrivate &other,
                                   ModifyEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyEndpointRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
