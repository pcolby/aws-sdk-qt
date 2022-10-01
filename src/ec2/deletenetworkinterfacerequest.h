// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINTERFACEREQUEST_H
#define QTAWS_DELETENETWORKINTERFACEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInterfaceRequestPrivate;

class QTAWSEC2_EXPORT DeleteNetworkInterfaceRequest : public Ec2Request {

public:
    DeleteNetworkInterfaceRequest(const DeleteNetworkInterfaceRequest &other);
    DeleteNetworkInterfaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkInterfaceRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
