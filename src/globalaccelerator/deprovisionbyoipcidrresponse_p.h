// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPROVISIONBYOIPCIDRRESPONSE_P_H
#define QTAWS_DEPROVISIONBYOIPCIDRRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeprovisionByoipCidrResponse;

class DeprovisionByoipCidrResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit DeprovisionByoipCidrResponsePrivate(DeprovisionByoipCidrResponse * const q);

    void parseDeprovisionByoipCidrResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeprovisionByoipCidrResponse)
    Q_DISABLE_COPY(DeprovisionByoipCidrResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
