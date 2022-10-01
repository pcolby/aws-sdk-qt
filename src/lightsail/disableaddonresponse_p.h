// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEADDONRESPONSE_P_H
#define QTAWS_DISABLEADDONRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DisableAddOnResponse;

class DisableAddOnResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DisableAddOnResponsePrivate(DisableAddOnResponse * const q);

    void parseDisableAddOnResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableAddOnResponse)
    Q_DISABLE_COPY(DisableAddOnResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
