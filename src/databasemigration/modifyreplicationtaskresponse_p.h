// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPLICATIONTASKRESPONSE_P_H
#define QTAWS_MODIFYREPLICATIONTASKRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class ModifyReplicationTaskResponse;

class ModifyReplicationTaskResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit ModifyReplicationTaskResponsePrivate(ModifyReplicationTaskResponse * const q);

    void parseModifyReplicationTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyReplicationTaskResponse)
    Q_DISABLE_COPY(ModifyReplicationTaskResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
