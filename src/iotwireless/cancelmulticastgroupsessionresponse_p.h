// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELMULTICASTGROUPSESSIONRESPONSE_P_H
#define QTAWS_CANCELMULTICASTGROUPSESSIONRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class CancelMulticastGroupSessionResponse;

class CancelMulticastGroupSessionResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit CancelMulticastGroupSessionResponsePrivate(CancelMulticastGroupSessionResponse * const q);

    void parseCancelMulticastGroupSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelMulticastGroupSessionResponse)
    Q_DISABLE_COPY(CancelMulticastGroupSessionResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
