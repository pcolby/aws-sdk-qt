// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EC2INSTANCECONNECTRESPONSE_H
#define QTAWS_EC2INSTANCECONNECTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsec2instanceconnectglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Ec2InstanceConnect {

class Ec2InstanceConnectResponsePrivate;

class QTAWSEC2INSTANCECONNECT_EXPORT Ec2InstanceConnectResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    Ec2InstanceConnectResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    Ec2InstanceConnectResponse(Ec2InstanceConnectResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Ec2InstanceConnectResponse)
    Q_DISABLE_COPY(Ec2InstanceConnectResponse)

};

} // namespace Ec2InstanceConnect
} // namespace QtAws

#endif
