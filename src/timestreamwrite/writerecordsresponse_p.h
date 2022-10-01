// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WRITERECORDSRESPONSE_P_H
#define QTAWS_WRITERECORDSRESPONSE_P_H

#include "timestreamwriteresponse_p.h"

namespace QtAws {
namespace TimestreamWrite {

class WriteRecordsResponse;

class WriteRecordsResponsePrivate : public TimestreamWriteResponsePrivate {

public:

    explicit WriteRecordsResponsePrivate(WriteRecordsResponse * const q);

    void parseWriteRecordsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(WriteRecordsResponse)
    Q_DISABLE_COPY(WriteRecordsResponsePrivate)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
