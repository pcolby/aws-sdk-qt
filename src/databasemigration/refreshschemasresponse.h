// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REFRESHSCHEMASRESPONSE_H
#define QTAWS_REFRESHSCHEMASRESPONSE_H

#include "databasemigrationresponse.h"
#include "refreshschemasrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class RefreshSchemasResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT RefreshSchemasResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    RefreshSchemasResponse(const RefreshSchemasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RefreshSchemasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RefreshSchemasResponse)
    Q_DISABLE_COPY(RefreshSchemasResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
