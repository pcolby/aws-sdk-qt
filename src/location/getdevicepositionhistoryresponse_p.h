// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEPOSITIONHISTORYRESPONSE_P_H
#define QTAWS_GETDEVICEPOSITIONHISTORYRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class GetDevicePositionHistoryResponse;

class GetDevicePositionHistoryResponsePrivate : public LocationResponsePrivate {

public:

    explicit GetDevicePositionHistoryResponsePrivate(GetDevicePositionHistoryResponse * const q);

    void parseGetDevicePositionHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDevicePositionHistoryResponse)
    Q_DISABLE_COPY(GetDevicePositionHistoryResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
