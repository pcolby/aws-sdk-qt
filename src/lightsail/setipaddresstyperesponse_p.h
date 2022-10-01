// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIPADDRESSTYPERESPONSE_P_H
#define QTAWS_SETIPADDRESSTYPERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class SetIpAddressTypeResponse;

class SetIpAddressTypeResponsePrivate : public LightsailResponsePrivate {

public:

    explicit SetIpAddressTypeResponsePrivate(SetIpAddressTypeResponse * const q);

    void parseSetIpAddressTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetIpAddressTypeResponse)
    Q_DISABLE_COPY(SetIpAddressTypeResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
