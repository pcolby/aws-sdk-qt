// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUPLOADSTATUSRESPONSE_P_H
#define QTAWS_GETUPLOADSTATUSRESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetUploadStatusResponse;

class GetUploadStatusResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit GetUploadStatusResponsePrivate(GetUploadStatusResponse * const q);

    void parseGetUploadStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetUploadStatusResponse)
    Q_DISABLE_COPY(GetUploadStatusResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
