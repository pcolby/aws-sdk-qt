// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEIPAMPOOLALLOCATIONREQUEST_H
#define QTAWS_RELEASEIPAMPOOLALLOCATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ReleaseIpamPoolAllocationRequestPrivate;

class QTAWSEC2_EXPORT ReleaseIpamPoolAllocationRequest : public Ec2Request {

public:
    ReleaseIpamPoolAllocationRequest(const ReleaseIpamPoolAllocationRequest &other);
    ReleaseIpamPoolAllocationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReleaseIpamPoolAllocationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
