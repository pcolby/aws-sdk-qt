// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONTACTSTREAMINGRESPONSE_P_H
#define QTAWS_STARTCONTACTSTREAMINGRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class StartContactStreamingResponse;

class StartContactStreamingResponsePrivate : public ConnectResponsePrivate {

public:

    explicit StartContactStreamingResponsePrivate(StartContactStreamingResponse * const q);

    void parseStartContactStreamingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartContactStreamingResponse)
    Q_DISABLE_COPY(StartContactStreamingResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
