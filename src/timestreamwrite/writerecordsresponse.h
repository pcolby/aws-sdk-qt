// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WRITERECORDSRESPONSE_H
#define QTAWS_WRITERECORDSRESPONSE_H

#include "timestreamwriteresponse.h"
#include "writerecordsrequest.h"

namespace QtAws {
namespace TimestreamWrite {

class WriteRecordsResponsePrivate;

class QTAWSTIMESTREAMWRITE_EXPORT WriteRecordsResponse : public TimestreamWriteResponse {
    Q_OBJECT

public:
    WriteRecordsResponse(const WriteRecordsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const WriteRecordsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WriteRecordsResponse)
    Q_DISABLE_COPY(WriteRecordsResponse)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
