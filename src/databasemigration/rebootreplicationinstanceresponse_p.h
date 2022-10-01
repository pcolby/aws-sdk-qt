// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTREPLICATIONINSTANCERESPONSE_P_H
#define QTAWS_REBOOTREPLICATIONINSTANCERESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class RebootReplicationInstanceResponse;

class RebootReplicationInstanceResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit RebootReplicationInstanceResponsePrivate(RebootReplicationInstanceResponse * const q);

    void parseRebootReplicationInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RebootReplicationInstanceResponse)
    Q_DISABLE_COPY(RebootReplicationInstanceResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
