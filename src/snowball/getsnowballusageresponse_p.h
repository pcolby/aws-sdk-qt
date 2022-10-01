// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNOWBALLUSAGERESPONSE_P_H
#define QTAWS_GETSNOWBALLUSAGERESPONSE_P_H

#include "snowballresponse_p.h"

namespace QtAws {
namespace Snowball {

class GetSnowballUsageResponse;

class GetSnowballUsageResponsePrivate : public SnowballResponsePrivate {

public:

    explicit GetSnowballUsageResponsePrivate(GetSnowballUsageResponse * const q);

    void parseGetSnowballUsageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSnowballUsageResponse)
    Q_DISABLE_COPY(GetSnowballUsageResponsePrivate)

};

} // namespace Snowball
} // namespace QtAws

#endif
