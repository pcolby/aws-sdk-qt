// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEMASRESPONSE_P_H
#define QTAWS_DESCRIBESCHEMASRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeSchemasResponse;

class DescribeSchemasResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeSchemasResponsePrivate(DescribeSchemasResponse * const q);

    void parseDescribeSchemasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSchemasResponse)
    Q_DISABLE_COPY(DescribeSchemasResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
