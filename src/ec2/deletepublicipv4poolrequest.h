// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPUBLICIPV4POOLREQUEST_H
#define QTAWS_DELETEPUBLICIPV4POOLREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeletePublicIpv4PoolRequestPrivate;

class QTAWSEC2_EXPORT DeletePublicIpv4PoolRequest : public Ec2Request {

public:
    DeletePublicIpv4PoolRequest(const DeletePublicIpv4PoolRequest &other);
    DeletePublicIpv4PoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePublicIpv4PoolRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
