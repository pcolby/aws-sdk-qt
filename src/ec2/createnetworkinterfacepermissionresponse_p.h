// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKINTERFACEPERMISSIONRESPONSE_P_H
#define QTAWS_CREATENETWORKINTERFACEPERMISSIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateNetworkInterfacePermissionResponse;

class CreateNetworkInterfacePermissionResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateNetworkInterfacePermissionResponsePrivate(CreateNetworkInterfacePermissionResponse * const q);

    void parseCreateNetworkInterfacePermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNetworkInterfacePermissionResponse)
    Q_DISABLE_COPY(CreateNetworkInterfacePermissionResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
