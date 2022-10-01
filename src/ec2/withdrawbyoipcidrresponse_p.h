// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WITHDRAWBYOIPCIDRRESPONSE_P_H
#define QTAWS_WITHDRAWBYOIPCIDRRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class WithdrawByoipCidrResponse;

class WithdrawByoipCidrResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit WithdrawByoipCidrResponsePrivate(WithdrawByoipCidrResponse * const q);

    void parseWithdrawByoipCidrResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(WithdrawByoipCidrResponse)
    Q_DISABLE_COPY(WithdrawByoipCidrResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
