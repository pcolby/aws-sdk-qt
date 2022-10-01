// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCENDPOINTSREQUEST_H
#define QTAWS_DELETEVPCENDPOINTSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpcEndpointsRequestPrivate;

class QTAWSEC2_EXPORT DeleteVpcEndpointsRequest : public Ec2Request {

public:
    DeleteVpcEndpointsRequest(const DeleteVpcEndpointsRequest &other);
    DeleteVpcEndpointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVpcEndpointsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
