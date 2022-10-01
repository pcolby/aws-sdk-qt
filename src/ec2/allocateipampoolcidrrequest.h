// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEIPAMPOOLCIDRREQUEST_H
#define QTAWS_ALLOCATEIPAMPOOLCIDRREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AllocateIpamPoolCidrRequestPrivate;

class QTAWSEC2_EXPORT AllocateIpamPoolCidrRequest : public Ec2Request {

public:
    AllocateIpamPoolCidrRequest(const AllocateIpamPoolCidrRequest &other);
    AllocateIpamPoolCidrRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AllocateIpamPoolCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
