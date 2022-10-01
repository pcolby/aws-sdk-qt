// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MOVEBYOIPCIDRTOIPAMREQUEST_H
#define QTAWS_MOVEBYOIPCIDRTOIPAMREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class MoveByoipCidrToIpamRequestPrivate;

class QTAWSEC2_EXPORT MoveByoipCidrToIpamRequest : public Ec2Request {

public:
    MoveByoipCidrToIpamRequest(const MoveByoipCidrToIpamRequest &other);
    MoveByoipCidrToIpamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MoveByoipCidrToIpamRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
