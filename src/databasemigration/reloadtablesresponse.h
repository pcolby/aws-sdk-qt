// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELOADTABLESRESPONSE_H
#define QTAWS_RELOADTABLESRESPONSE_H

#include "databasemigrationresponse.h"
#include "reloadtablesrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ReloadTablesResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT ReloadTablesResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    ReloadTablesResponse(const ReloadTablesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReloadTablesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReloadTablesResponse)
    Q_DISABLE_COPY(ReloadTablesResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
