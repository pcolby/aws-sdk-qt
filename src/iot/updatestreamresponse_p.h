// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTREAMRESPONSE_P_H
#define QTAWS_UPDATESTREAMRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateStreamResponse;

class UpdateStreamResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateStreamResponsePrivate(UpdateStreamResponse * const q);

    void parseUpdateStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateStreamResponse)
    Q_DISABLE_COPY(UpdateStreamResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
