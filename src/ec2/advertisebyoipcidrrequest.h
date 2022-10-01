// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADVERTISEBYOIPCIDRREQUEST_H
#define QTAWS_ADVERTISEBYOIPCIDRREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AdvertiseByoipCidrRequestPrivate;

class QTAWSEC2_EXPORT AdvertiseByoipCidrRequest : public Ec2Request {

public:
    AdvertiseByoipCidrRequest(const AdvertiseByoipCidrRequest &other);
    AdvertiseByoipCidrRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdvertiseByoipCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
