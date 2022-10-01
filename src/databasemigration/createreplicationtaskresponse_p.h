// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONTASKRESPONSE_P_H
#define QTAWS_CREATEREPLICATIONTASKRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class CreateReplicationTaskResponse;

class CreateReplicationTaskResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit CreateReplicationTaskResponsePrivate(CreateReplicationTaskResponse * const q);

    void parseCreateReplicationTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateReplicationTaskResponse)
    Q_DISABLE_COPY(CreateReplicationTaskResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
