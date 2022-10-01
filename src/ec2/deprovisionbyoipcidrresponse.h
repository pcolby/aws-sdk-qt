// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPROVISIONBYOIPCIDRRESPONSE_H
#define QTAWS_DEPROVISIONBYOIPCIDRRESPONSE_H

#include "ec2response.h"
#include "deprovisionbyoipcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class DeprovisionByoipCidrResponsePrivate;

class QTAWSEC2_EXPORT DeprovisionByoipCidrResponse : public Ec2Response {
    Q_OBJECT

public:
    DeprovisionByoipCidrResponse(const DeprovisionByoipCidrRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeprovisionByoipCidrRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeprovisionByoipCidrResponse)
    Q_DISABLE_COPY(DeprovisionByoipCidrResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
