// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRUNRESPONSE_P_H
#define QTAWS_GETRUNRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class GetRunResponse;

class GetRunResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit GetRunResponsePrivate(GetRunResponse * const q);

    void parseGetRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRunResponse)
    Q_DISABLE_COPY(GetRunResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
