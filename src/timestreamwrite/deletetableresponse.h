// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETABLERESPONSE_H
#define QTAWS_DELETETABLERESPONSE_H

#include "timestreamwriteresponse.h"
#include "deletetablerequest.h"

namespace QtAws {
namespace TimestreamWrite {

class DeleteTableResponsePrivate;

class QTAWSTIMESTREAMWRITE_EXPORT DeleteTableResponse : public TimestreamWriteResponse {
    Q_OBJECT

public:
    DeleteTableResponse(const DeleteTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTableResponse)
    Q_DISABLE_COPY(DeleteTableResponse)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
