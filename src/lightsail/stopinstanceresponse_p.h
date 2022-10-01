// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPINSTANCERESPONSE_P_H
#define QTAWS_STOPINSTANCERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class StopInstanceResponse;

class StopInstanceResponsePrivate : public LightsailResponsePrivate {

public:

    explicit StopInstanceResponsePrivate(StopInstanceResponse * const q);

    void parseStopInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopInstanceResponse)
    Q_DISABLE_COPY(StopInstanceResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
