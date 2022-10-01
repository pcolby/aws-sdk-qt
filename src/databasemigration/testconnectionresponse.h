// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTCONNECTIONRESPONSE_H
#define QTAWS_TESTCONNECTIONRESPONSE_H

#include "databasemigrationresponse.h"
#include "testconnectionrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class TestConnectionResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT TestConnectionResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    TestConnectionResponse(const TestConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TestConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestConnectionResponse)
    Q_DISABLE_COPY(TestConnectionResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
