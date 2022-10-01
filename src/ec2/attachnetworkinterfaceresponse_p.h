// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHNETWORKINTERFACERESPONSE_P_H
#define QTAWS_ATTACHNETWORKINTERFACERESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class AttachNetworkInterfaceResponse;

class AttachNetworkInterfaceResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit AttachNetworkInterfaceResponsePrivate(AttachNetworkInterfaceResponse * const q);

    void parseAttachNetworkInterfaceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachNetworkInterfaceResponse)
    Q_DISABLE_COPY(AttachNetworkInterfaceResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
