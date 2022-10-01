// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATABASERESPONSE_P_H
#define QTAWS_DELETEDATABASERESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class DeleteDatabaseResponse;

class DeleteDatabaseResponsePrivate : public GlueResponsePrivate {

public:

    explicit DeleteDatabaseResponsePrivate(DeleteDatabaseResponse * const q);

    void parseDeleteDatabaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDatabaseResponse)
    Q_DISABLE_COPY(DeleteDatabaseResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
