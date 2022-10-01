// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPNCONNECTIONREQUEST_H
#define QTAWS_DELETEVPNCONNECTIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpnConnectionRequestPrivate;

class QTAWSEC2_EXPORT DeleteVpnConnectionRequest : public Ec2Request {

public:
    DeleteVpnConnectionRequest(const DeleteVpnConnectionRequest &other);
    DeleteVpnConnectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVpnConnectionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
