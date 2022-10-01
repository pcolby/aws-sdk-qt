// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFLEETRESPONSE_P_H
#define QTAWS_STARTFLEETRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class StartFleetResponse;

class StartFleetResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit StartFleetResponsePrivate(StartFleetResponse * const q);

    void parseStartFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartFleetResponse)
    Q_DISABLE_COPY(StartFleetResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
