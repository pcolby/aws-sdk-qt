// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINPUTDEVICESRESPONSE_P_H
#define QTAWS_LISTINPUTDEVICESRESPONSE_P_H

#include "medialiveresponse_p.h"

namespace QtAws {
namespace MediaLive {

class ListInputDevicesResponse;

class ListInputDevicesResponsePrivate : public MediaLiveResponsePrivate {

public:

    explicit ListInputDevicesResponsePrivate(ListInputDevicesResponse * const q);

    void parseListInputDevicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInputDevicesResponse)
    Q_DISABLE_COPY(ListInputDevicesResponsePrivate)

};

} // namespace MediaLive
} // namespace QtAws

#endif
