// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATABASEMIGRATIONRESPONSE_H
#define QTAWS_DATABASEMIGRATIONRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsdatabasemigrationglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace DatabaseMigration {

class DatabaseMigrationResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DatabaseMigrationResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    DatabaseMigrationResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    DatabaseMigrationResponse(DatabaseMigrationResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DatabaseMigrationResponse)
    Q_DISABLE_COPY(DatabaseMigrationResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
