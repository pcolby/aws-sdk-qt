// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEMASRESPONSE_H
#define QTAWS_DESCRIBESCHEMASRESPONSE_H

#include "databasemigrationresponse.h"
#include "describeschemasrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeSchemasResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeSchemasResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DescribeSchemasResponse(const DescribeSchemasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSchemasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSchemasResponse)
    Q_DISABLE_COPY(DescribeSchemasResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
