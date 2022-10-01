// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTRAFFICMIRRORFILTERNETWORKSERVICESRESPONSE_P_H
#define QTAWS_MODIFYTRAFFICMIRRORFILTERNETWORKSERVICESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifyTrafficMirrorFilterNetworkServicesResponse;

class ModifyTrafficMirrorFilterNetworkServicesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifyTrafficMirrorFilterNetworkServicesResponsePrivate(ModifyTrafficMirrorFilterNetworkServicesResponse * const q);

    void parseModifyTrafficMirrorFilterNetworkServicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyTrafficMirrorFilterNetworkServicesResponse)
    Q_DISABLE_COPY(ModifyTrafficMirrorFilterNetworkServicesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
