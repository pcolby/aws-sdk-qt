// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPACCESSLOGGINGRESPONSE_P_H
#define QTAWS_STOPACCESSLOGGINGRESPONSE_P_H

#include "mediastoreresponse_p.h"

namespace QtAws {
namespace MediaStore {

class StopAccessLoggingResponse;

class StopAccessLoggingResponsePrivate : public MediaStoreResponsePrivate {

public:

    explicit StopAccessLoggingResponsePrivate(StopAccessLoggingResponse * const q);

    void parseStopAccessLoggingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopAccessLoggingResponse)
    Q_DISABLE_COPY(StopAccessLoggingResponsePrivate)

};

} // namespace MediaStore
} // namespace QtAws

#endif
