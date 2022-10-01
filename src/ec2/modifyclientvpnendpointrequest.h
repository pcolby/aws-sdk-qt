// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLIENTVPNENDPOINTREQUEST_H
#define QTAWS_MODIFYCLIENTVPNENDPOINTREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyClientVpnEndpointRequestPrivate;

class QTAWSEC2_EXPORT ModifyClientVpnEndpointRequest : public Ec2Request {

public:
    ModifyClientVpnEndpointRequest(const ModifyClientVpnEndpointRequest &other);
    ModifyClientVpnEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyClientVpnEndpointRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
