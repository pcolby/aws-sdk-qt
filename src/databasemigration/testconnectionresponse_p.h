// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTCONNECTIONRESPONSE_P_H
#define QTAWS_TESTCONNECTIONRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class TestConnectionResponse;

class TestConnectionResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit TestConnectionResponsePrivate(TestConnectionResponse * const q);

    void parseTestConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestConnectionResponse)
    Q_DISABLE_COPY(TestConnectionResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
