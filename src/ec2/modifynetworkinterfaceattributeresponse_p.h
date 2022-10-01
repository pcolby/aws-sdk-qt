// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYNETWORKINTERFACEATTRIBUTERESPONSE_P_H
#define QTAWS_MODIFYNETWORKINTERFACEATTRIBUTERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyNetworkInterfaceAttributeResponse;

class ModifyNetworkInterfaceAttributeResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyNetworkInterfaceAttributeResponsePrivate(ModifyNetworkInterfaceAttributeResponse * const q);

    void parseModifyNetworkInterfaceAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyNetworkInterfaceAttributeResponse)
    Q_DISABLE_COPY(ModifyNetworkInterfaceAttributeResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
