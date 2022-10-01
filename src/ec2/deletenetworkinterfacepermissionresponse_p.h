// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINTERFACEPERMISSIONRESPONSE_P_H
#define QTAWS_DELETENETWORKINTERFACEPERMISSIONRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInterfacePermissionResponse;

class DeleteNetworkInterfacePermissionResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteNetworkInterfacePermissionResponsePrivate(DeleteNetworkInterfacePermissionResponse * const q);

    void parseDeleteNetworkInterfacePermissionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkInterfacePermissionResponse)
    Q_DISABLE_COPY(DeleteNetworkInterfacePermissionResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
