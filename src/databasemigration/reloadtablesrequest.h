// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELOADTABLESREQUEST_H
#define QTAWS_RELOADTABLESREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ReloadTablesRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT ReloadTablesRequest : public DatabaseMigrationRequest {

public:
    ReloadTablesRequest(const ReloadTablesRequest &other);
    ReloadTablesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReloadTablesRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
