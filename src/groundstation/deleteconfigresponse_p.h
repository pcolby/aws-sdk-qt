// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGRESPONSE_P_H
#define QTAWS_DELETECONFIGRESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class DeleteConfigResponse;

class DeleteConfigResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit DeleteConfigResponsePrivate(DeleteConfigResponse * const q);

    void parseDeleteConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConfigResponse)
    Q_DISABLE_COPY(DeleteConfigResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
