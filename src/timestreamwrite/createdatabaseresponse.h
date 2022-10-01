// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATABASERESPONSE_H
#define QTAWS_CREATEDATABASERESPONSE_H

#include "timestreamwriteresponse.h"
#include "createdatabaserequest.h"

namespace QtAws {
namespace TimestreamWrite {

class CreateDatabaseResponsePrivate;

class QTAWSTIMESTREAMWRITE_EXPORT CreateDatabaseResponse : public TimestreamWriteResponse {
    Q_OBJECT

public:
    CreateDatabaseResponse(const CreateDatabaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDatabaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDatabaseResponse)
    Q_DISABLE_COPY(CreateDatabaseResponse)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
