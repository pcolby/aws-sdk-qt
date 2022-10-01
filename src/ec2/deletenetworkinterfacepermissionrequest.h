// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINTERFACEPERMISSIONREQUEST_H
#define QTAWS_DELETENETWORKINTERFACEPERMISSIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInterfacePermissionRequestPrivate;

class QTAWSEC2_EXPORT DeleteNetworkInterfacePermissionRequest : public Ec2Request {

public:
    DeleteNetworkInterfacePermissionRequest(const DeleteNetworkInterfacePermissionRequest &other);
    DeleteNetworkInterfacePermissionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkInterfacePermissionRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
