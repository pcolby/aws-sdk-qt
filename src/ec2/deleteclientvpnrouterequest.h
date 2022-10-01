// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLIENTVPNROUTEREQUEST_H
#define QTAWS_DELETECLIENTVPNROUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteClientVpnRouteRequestPrivate;

class QTAWSEC2_EXPORT DeleteClientVpnRouteRequest : public Ec2Request {

public:
    DeleteClientVpnRouteRequest(const DeleteClientVpnRouteRequest &other);
    DeleteClientVpnRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClientVpnRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
