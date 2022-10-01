// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDEVICESYNCRESPONSE_P_H
#define QTAWS_STARTDEVICESYNCRESPONSE_P_H

#include "alexaforbusinessresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class StartDeviceSyncResponse;

class StartDeviceSyncResponsePrivate : public AlexaForBusinessResponsePrivate {

public:

    explicit StartDeviceSyncResponsePrivate(StartDeviceSyncResponse * const q);

    void parseStartDeviceSyncResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartDeviceSyncResponse)
    Q_DISABLE_COPY(StartDeviceSyncResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
