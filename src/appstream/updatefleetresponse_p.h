// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETRESPONSE_P_H
#define QTAWS_UPDATEFLEETRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class UpdateFleetResponse;

class UpdateFleetResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit UpdateFleetResponsePrivate(UpdateFleetResponse * const q);

    void parseUpdateFleetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFleetResponse)
    Q_DISABLE_COPY(UpdateFleetResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
