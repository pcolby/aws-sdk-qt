// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONTASKRESPONSE_P_H
#define QTAWS_DELETEREPLICATIONTASKRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteReplicationTaskResponse;

class DeleteReplicationTaskResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DeleteReplicationTaskResponsePrivate(DeleteReplicationTaskResponse * const q);

    void parseDeleteReplicationTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteReplicationTaskResponse)
    Q_DISABLE_COPY(DeleteReplicationTaskResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
