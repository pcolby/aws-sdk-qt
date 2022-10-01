// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATABASERESPONSE_P_H
#define QTAWS_GETDATABASERESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetDatabaseResponse;

class GetDatabaseResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetDatabaseResponsePrivate(GetDatabaseResponse * const q);

    void parseGetDatabaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDatabaseResponse)
    Q_DISABLE_COPY(GetDatabaseResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
