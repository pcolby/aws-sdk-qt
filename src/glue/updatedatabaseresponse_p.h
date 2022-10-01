// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATABASERESPONSE_P_H
#define QTAWS_UPDATEDATABASERESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class UpdateDatabaseResponse;

class UpdateDatabaseResponsePrivate : public GlueResponsePrivate {

public:

    explicit UpdateDatabaseResponsePrivate(UpdateDatabaseResponse * const q);

    void parseUpdateDatabaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDatabaseResponse)
    Q_DISABLE_COPY(UpdateDatabaseResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
