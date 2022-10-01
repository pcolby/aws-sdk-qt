// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MOVEREPLICATIONTASKRESPONSE_P_H
#define QTAWS_MOVEREPLICATIONTASKRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class MoveReplicationTaskResponse;

class MoveReplicationTaskResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit MoveReplicationTaskResponsePrivate(MoveReplicationTaskResponse * const q);

    void parseMoveReplicationTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MoveReplicationTaskResponse)
    Q_DISABLE_COPY(MoveReplicationTaskResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
