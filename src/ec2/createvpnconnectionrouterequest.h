// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPNCONNECTIONROUTEREQUEST_H
#define QTAWS_CREATEVPNCONNECTIONROUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateVpnConnectionRouteRequestPrivate;

class QTAWSEC2_EXPORT CreateVpnConnectionRouteRequest : public Ec2Request {

public:
    CreateVpnConnectionRouteRequest(const CreateVpnConnectionRouteRequest &other);
    CreateVpnConnectionRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpnConnectionRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
