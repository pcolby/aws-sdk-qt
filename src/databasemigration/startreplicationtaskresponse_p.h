// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLICATIONTASKRESPONSE_P_H
#define QTAWS_STARTREPLICATIONTASKRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class StartReplicationTaskResponse;

class StartReplicationTaskResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit StartReplicationTaskResponsePrivate(StartReplicationTaskResponse * const q);

    void parseStartReplicationTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartReplicationTaskResponse)
    Q_DISABLE_COPY(StartReplicationTaskResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
