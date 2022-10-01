// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONINSTANCERESPONSE_P_H
#define QTAWS_CREATEREPLICATIONINSTANCERESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class CreateReplicationInstanceResponse;

class CreateReplicationInstanceResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit CreateReplicationInstanceResponsePrivate(CreateReplicationInstanceResponse * const q);

    void parseCreateReplicationInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateReplicationInstanceResponse)
    Q_DISABLE_COPY(CreateReplicationInstanceResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
