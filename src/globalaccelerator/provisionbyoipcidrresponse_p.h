// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONBYOIPCIDRRESPONSE_P_H
#define QTAWS_PROVISIONBYOIPCIDRRESPONSE_P_H

#include "globalacceleratorresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class ProvisionByoipCidrResponse;

class ProvisionByoipCidrResponsePrivate : public GlobalAcceleratorResponsePrivate {

public:

    explicit ProvisionByoipCidrResponsePrivate(ProvisionByoipCidrResponse * const q);

    void parseProvisionByoipCidrResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ProvisionByoipCidrResponse)
    Q_DISABLE_COPY(ProvisionByoipCidrResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
