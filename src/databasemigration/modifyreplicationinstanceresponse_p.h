// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPLICATIONINSTANCERESPONSE_P_H
#define QTAWS_MODIFYREPLICATIONINSTANCERESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class ModifyReplicationInstanceResponse;

class ModifyReplicationInstanceResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit ModifyReplicationInstanceResponsePrivate(ModifyReplicationInstanceResponse * const q);

    void parseModifyReplicationInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyReplicationInstanceResponse)
    Q_DISABLE_COPY(ModifyReplicationInstanceResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
