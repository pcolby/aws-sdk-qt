// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTESTRESPONSE_P_H
#define QTAWS_GETTESTRESPONSE_P_H

#include "devicefarmresponse_p.h"

namespace QtAws {
namespace DeviceFarm {

class GetTestResponse;

class GetTestResponsePrivate : public DeviceFarmResponsePrivate {

public:

    explicit GetTestResponsePrivate(GetTestResponse * const q);

    void parseGetTestResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTestResponse)
    Q_DISABLE_COPY(GetTestResponsePrivate)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
