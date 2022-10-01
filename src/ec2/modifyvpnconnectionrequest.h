// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPNCONNECTIONREQUEST_H
#define QTAWS_MODIFYVPNCONNECTIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpnConnectionRequestPrivate;

class QTAWSEC2_EXPORT ModifyVpnConnectionRequest : public Ec2Request {

public:
    ModifyVpnConnectionRequest(const ModifyVpnConnectionRequest &other);
    ModifyVpnConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVpnConnectionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
