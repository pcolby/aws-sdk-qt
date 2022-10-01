// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WITHDRAWBYOIPCIDRREQUEST_H
#define QTAWS_WITHDRAWBYOIPCIDRREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class WithdrawByoipCidrRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT WithdrawByoipCidrRequest : public GlobalAcceleratorRequest {

public:
    WithdrawByoipCidrRequest(const WithdrawByoipCidrRequest &other);
    WithdrawByoipCidrRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WithdrawByoipCidrRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
