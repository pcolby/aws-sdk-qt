// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTREQUEST_H
#define QTAWS_DELETEENDPOINTREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteEndpointRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DeleteEndpointRequest : public DatabaseMigrationRequest {

public:
    DeleteEndpointRequest(const DeleteEndpointRequest &other);
    DeleteEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEndpointRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
