// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EC2INSTANCECONNECTRESPONSE_P_H
#define QTAWS_EC2INSTANCECONNECTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Ec2InstanceConnect {

class Ec2InstanceConnectResponse;

class Ec2InstanceConnectResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit Ec2InstanceConnectResponsePrivate(Ec2InstanceConnectResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(Ec2InstanceConnectResponse)
    Q_DISABLE_COPY(Ec2InstanceConnectResponsePrivate)

};

} // namespace Ec2InstanceConnect
} // namespace QtAws

#endif
