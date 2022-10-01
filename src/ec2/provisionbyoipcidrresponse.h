// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONBYOIPCIDRRESPONSE_H
#define QTAWS_PROVISIONBYOIPCIDRRESPONSE_H

#include "ec2response.h"
#include "provisionbyoipcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class ProvisionByoipCidrResponsePrivate;

class QTAWSEC2_EXPORT ProvisionByoipCidrResponse : public Ec2Response {
    Q_OBJECT

public:
    ProvisionByoipCidrResponse(const ProvisionByoipCidrRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ProvisionByoipCidrRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ProvisionByoipCidrResponse)
    Q_DISABLE_COPY(ProvisionByoipCidrResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
