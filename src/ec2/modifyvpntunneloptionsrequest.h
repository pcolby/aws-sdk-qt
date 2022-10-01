// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPNTUNNELOPTIONSREQUEST_H
#define QTAWS_MODIFYVPNTUNNELOPTIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpnTunnelOptionsRequestPrivate;

class QTAWSEC2_EXPORT ModifyVpnTunnelOptionsRequest : public Ec2Request {

public:
    ModifyVpnTunnelOptionsRequest(const ModifyVpnTunnelOptionsRequest &other);
    ModifyVpnTunnelOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVpnTunnelOptionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
