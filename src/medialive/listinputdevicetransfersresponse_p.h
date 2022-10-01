// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINPUTDEVICETRANSFERSRESPONSE_P_H
#define QTAWS_LISTINPUTDEVICETRANSFERSRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class ListInputDeviceTransfersResponse;

class ListInputDeviceTransfersResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit ListInputDeviceTransfersResponsePrivate(ListInputDeviceTransfersResponse * const q);

    void parseListInputDeviceTransfersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInputDeviceTransfersResponse)
    Q_DISABLE_COPY(ListInputDeviceTransfersResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
