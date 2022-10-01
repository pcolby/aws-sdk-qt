// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATABASESRESPONSE_P_H
#define QTAWS_GETDATABASESRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetDatabasesResponse;

class GetDatabasesResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetDatabasesResponsePrivate(GetDatabasesResponse * const q);

    void parseGetDatabasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDatabasesResponse)
    Q_DISABLE_COPY(GetDatabasesResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
