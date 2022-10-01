// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEADDONRESPONSE_P_H
#define QTAWS_ENABLEADDONRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class EnableAddOnResponse;

class EnableAddOnResponsePrivate : public LightsailResponsePrivate {

public:

    explicit EnableAddOnResponsePrivate(EnableAddOnResponse * const q);

    void parseEnableAddOnResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableAddOnResponse)
    Q_DISABLE_COPY(EnableAddOnResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
