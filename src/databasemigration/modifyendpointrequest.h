// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYENDPOINTREQUEST_H
#define QTAWS_MODIFYENDPOINTREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ModifyEndpointRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT ModifyEndpointRequest : public DatabaseMigrationRequest {

public:
    ModifyEndpointRequest(const ModifyEndpointRequest &other);
    ModifyEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyEndpointRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
