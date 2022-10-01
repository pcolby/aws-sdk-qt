// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNPEERVPCRESPONSE_P_H
#define QTAWS_UNPEERVPCRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class UnpeerVpcResponse;

class UnpeerVpcResponsePrivate : public LightsailResponsePrivate {

public:

    explicit UnpeerVpcResponsePrivate(UnpeerVpcResponse * const q);

    void parseUnpeerVpcResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UnpeerVpcResponse)
    Q_DISABLE_COPY(UnpeerVpcResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
