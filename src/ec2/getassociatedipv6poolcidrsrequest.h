// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSOCIATEDIPV6POOLCIDRSREQUEST_H
#define QTAWS_GETASSOCIATEDIPV6POOLCIDRSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetAssociatedIpv6PoolCidrsRequestPrivate;

class QTAWSEC2_EXPORT GetAssociatedIpv6PoolCidrsRequest : public Ec2Request {

public:
    GetAssociatedIpv6PoolCidrsRequest(const GetAssociatedIpv6PoolCidrsRequest &other);
    GetAssociatedIpv6PoolCidrsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssociatedIpv6PoolCidrsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
