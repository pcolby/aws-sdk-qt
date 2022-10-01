// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WITHDRAWBYOIPCIDRREQUEST_H
#define QTAWS_WITHDRAWBYOIPCIDRREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class WithdrawByoipCidrRequestPrivate;

class QTAWSEC2_EXPORT WithdrawByoipCidrRequest : public Ec2Request {

public:
    WithdrawByoipCidrRequest(const WithdrawByoipCidrRequest &other);
    WithdrawByoipCidrRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WithdrawByoipCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
