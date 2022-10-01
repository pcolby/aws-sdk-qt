// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REFRESHSCHEMASRESPONSE_P_H
#define QTAWS_REFRESHSCHEMASRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class RefreshSchemasResponse;

class RefreshSchemasResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit RefreshSchemasResponsePrivate(RefreshSchemasResponse * const q);

    void parseRefreshSchemasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RefreshSchemasResponse)
    Q_DISABLE_COPY(RefreshSchemasResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
