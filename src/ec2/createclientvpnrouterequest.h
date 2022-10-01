// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECLIENTVPNROUTEREQUEST_H
#define QTAWS_CREATECLIENTVPNROUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateClientVpnRouteRequestPrivate;

class QTAWSEC2_EXPORT CreateClientVpnRouteRequest : public Ec2Request {

public:
    CreateClientVpnRouteRequest(const CreateClientVpnRouteRequest &other);
    CreateClientVpnRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateClientVpnRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
