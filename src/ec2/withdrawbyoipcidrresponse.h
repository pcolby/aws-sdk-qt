// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WITHDRAWBYOIPCIDRRESPONSE_H
#define QTAWS_WITHDRAWBYOIPCIDRRESPONSE_H

#include "ec2response.h"
#include "withdrawbyoipcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class WithdrawByoipCidrResponsePrivate;

class QTAWSEC2_EXPORT WithdrawByoipCidrResponse : public Ec2Response {
    Q_OBJECT

public:
    WithdrawByoipCidrResponse(const WithdrawByoipCidrRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const WithdrawByoipCidrRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WithdrawByoipCidrResponse)
    Q_DISABLE_COPY(WithdrawByoipCidrResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
