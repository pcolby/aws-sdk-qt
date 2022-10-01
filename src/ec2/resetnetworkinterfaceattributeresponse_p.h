// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETNETWORKINTERFACEATTRIBUTERESPONSE_P_H
#define QTAWS_RESETNETWORKINTERFACEATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ResetNetworkInterfaceAttributeResponse;

class ResetNetworkInterfaceAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ResetNetworkInterfaceAttributeResponsePrivate(ResetNetworkInterfaceAttributeResponse * const q);

    void parseResetNetworkInterfaceAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetNetworkInterfaceAttributeResponse)
    Q_DISABLE_COPY(ResetNetworkInterfaceAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
