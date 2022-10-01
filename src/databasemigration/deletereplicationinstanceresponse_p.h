// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONINSTANCERESPONSE_P_H
#define QTAWS_DELETEREPLICATIONINSTANCERESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteReplicationInstanceResponse;

class DeleteReplicationInstanceResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DeleteReplicationInstanceResponsePrivate(DeleteReplicationInstanceResponse * const q);

    void parseDeleteReplicationInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteReplicationInstanceResponse)
    Q_DISABLE_COPY(DeleteReplicationInstanceResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
