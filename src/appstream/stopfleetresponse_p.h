// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPFLEETRESPONSE_P_H
#define QTAWS_STOPFLEETRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class StopFleetResponse;

class StopFleetResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit StopFleetResponsePrivate(StopFleetResponse * const q);

    void parseStopFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopFleetResponse)
    Q_DISABLE_COPY(StopFleetResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
