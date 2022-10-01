// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYENDPOINTRESPONSE_P_H
#define QTAWS_MODIFYENDPOINTRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class ModifyEndpointResponse;

class ModifyEndpointResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit ModifyEndpointResponsePrivate(ModifyEndpointResponse * const q);

    void parseModifyEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyEndpointResponse)
    Q_DISABLE_COPY(ModifyEndpointResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
