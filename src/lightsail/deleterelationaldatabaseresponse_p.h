// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERELATIONALDATABASERESPONSE_P_H
#define QTAWS_DELETERELATIONALDATABASERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DeleteRelationalDatabaseResponse;

class DeleteRelationalDatabaseResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DeleteRelationalDatabaseResponsePrivate(DeleteRelationalDatabaseResponse * const q);

    void parseDeleteRelationalDatabaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRelationalDatabaseResponse)
    Q_DISABLE_COPY(DeleteRelationalDatabaseResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
