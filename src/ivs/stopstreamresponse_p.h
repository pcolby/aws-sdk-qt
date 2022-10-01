// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTREAMRESPONSE_P_H
#define QTAWS_STOPSTREAMRESPONSE_P_H

#include "ivsresponse_p.h"

namespace QtAws {
namespace Ivs {

class StopStreamResponse;

class StopStreamResponsePrivate : public IvsResponsePrivate {

public:

    explicit StopStreamResponsePrivate(StopStreamResponse * const q);

    void parseStopStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopStreamResponse)
    Q_DISABLE_COPY(StopStreamResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif
