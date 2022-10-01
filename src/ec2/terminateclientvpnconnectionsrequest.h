// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATECLIENTVPNCONNECTIONSREQUEST_H
#define QTAWS_TERMINATECLIENTVPNCONNECTIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class TerminateClientVpnConnectionsRequestPrivate;

class QTAWSEC2_EXPORT TerminateClientVpnConnectionsRequest : public Ec2Request {

public:
    TerminateClientVpnConnectionsRequest(const TerminateClientVpnConnectionsRequest &other);
    TerminateClientVpnConnectionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateClientVpnConnectionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
