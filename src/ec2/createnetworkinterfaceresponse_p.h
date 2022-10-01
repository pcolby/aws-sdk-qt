// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKINTERFACERESPONSE_P_H
#define QTAWS_CREATENETWORKINTERFACERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateNetworkInterfaceResponse;

class CreateNetworkInterfaceResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateNetworkInterfaceResponsePrivate(CreateNetworkInterfaceResponse * const q);

    void parseCreateNetworkInterfaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNetworkInterfaceResponse)
    Q_DISABLE_COPY(CreateNetworkInterfaceResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
