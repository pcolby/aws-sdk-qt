// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPREPLICATIONTASKRESPONSE_P_H
#define QTAWS_STOPREPLICATIONTASKRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class StopReplicationTaskResponse;

class StopReplicationTaskResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit StopReplicationTaskResponsePrivate(StopReplicationTaskResponse * const q);

    void parseStopReplicationTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopReplicationTaskResponse)
    Q_DISABLE_COPY(StopReplicationTaskResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
