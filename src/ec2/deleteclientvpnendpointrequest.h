// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLIENTVPNENDPOINTREQUEST_H
#define QTAWS_DELETECLIENTVPNENDPOINTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteClientVpnEndpointRequestPrivate;

class QTAWSEC2_EXPORT DeleteClientVpnEndpointRequest : public Ec2Request {

public:
    DeleteClientVpnEndpointRequest(const DeleteClientVpnEndpointRequest &other);
    DeleteClientVpnEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClientVpnEndpointRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
