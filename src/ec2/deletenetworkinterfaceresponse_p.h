// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINTERFACERESPONSE_P_H
#define QTAWS_DELETENETWORKINTERFACERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInterfaceResponse;

class DeleteNetworkInterfaceResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteNetworkInterfaceResponsePrivate(DeleteNetworkInterfaceResponse * const q);

    void parseDeleteNetworkInterfaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkInterfaceResponse)
    Q_DISABLE_COPY(DeleteNetworkInterfaceResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
