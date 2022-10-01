// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTACCESSLOGGINGRESPONSE_P_H
#define QTAWS_STARTACCESSLOGGINGRESPONSE_P_H

#include "mediastoreresponse_p.h"

namespace QtAws {
namespace MediaStore {

class StartAccessLoggingResponse;

class StartAccessLoggingResponsePrivate : public MediaStoreResponsePrivate {

public:

    explicit StartAccessLoggingResponsePrivate(StartAccessLoggingResponse * const q);

    void parseStartAccessLoggingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartAccessLoggingResponse)
    Q_DISABLE_COPY(StartAccessLoggingResponsePrivate)

};

} // namespace MediaStore
} // namespace QtAws

#endif
