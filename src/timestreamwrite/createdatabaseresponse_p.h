// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATABASERESPONSE_P_H
#define QTAWS_CREATEDATABASERESPONSE_P_H

#include "timestreamwriteresponse_p.h"

namespace QtAws {
namespace TimestreamWrite {

class CreateDatabaseResponse;

class CreateDatabaseResponsePrivate : public TimestreamWriteResponsePrivate {

public:

    explicit CreateDatabaseResponsePrivate(CreateDatabaseResponse * const q);

    void parseCreateDatabaseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDatabaseResponse)
    Q_DISABLE_COPY(CreateDatabaseResponsePrivate)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
