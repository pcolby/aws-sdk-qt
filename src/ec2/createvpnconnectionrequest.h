// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPNCONNECTIONREQUEST_H
#define QTAWS_CREATEVPNCONNECTIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateVpnConnectionRequestPrivate;

class QTAWSEC2_EXPORT CreateVpnConnectionRequest : public Ec2Request {

public:
    CreateVpnConnectionRequest(const CreateVpnConnectionRequest &other);
    CreateVpnConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpnConnectionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
