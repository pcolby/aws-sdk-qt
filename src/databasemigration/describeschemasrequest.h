// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEMASREQUEST_H
#define QTAWS_DESCRIBESCHEMASREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeSchemasRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeSchemasRequest : public DatabaseMigrationRequest {

public:
    DescribeSchemasRequest(const DescribeSchemasRequest &other);
    DescribeSchemasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSchemasRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
