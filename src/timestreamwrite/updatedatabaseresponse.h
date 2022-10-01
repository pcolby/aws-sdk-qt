// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATABASERESPONSE_H
#define QTAWS_UPDATEDATABASERESPONSE_H

#include "timestreamwriteresponse.h"
#include "updatedatabaserequest.h"

namespace QtAws {
namespace TimestreamWrite {

class UpdateDatabaseResponsePrivate;

class QTAWSTIMESTREAMWRITE_EXPORT UpdateDatabaseResponse : public TimestreamWriteResponse {
    Q_OBJECT

public:
    UpdateDatabaseResponse(const UpdateDatabaseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDatabaseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDatabaseResponse)
    Q_DISABLE_COPY(UpdateDatabaseResponse)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
