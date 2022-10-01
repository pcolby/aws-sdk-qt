// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHNETWORKINTERFACERESPONSE_P_H
#define QTAWS_DETACHNETWORKINTERFACERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DetachNetworkInterfaceResponse;

class DetachNetworkInterfaceResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DetachNetworkInterfaceResponsePrivate(DetachNetworkInterfaceResponse * const q);

    void parseDetachNetworkInterfaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachNetworkInterfaceResponse)
    Q_DISABLE_COPY(DetachNetworkInterfaceResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
