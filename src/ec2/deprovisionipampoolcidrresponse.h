// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPROVISIONIPAMPOOLCIDRRESPONSE_H
#define QTAWS_DEPROVISIONIPAMPOOLCIDRRESPONSE_H

#include "ec2response.h"
#include "deprovisionipampoolcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class DeprovisionIpamPoolCidrResponsePrivate;

class QTAWSEC2_EXPORT DeprovisionIpamPoolCidrResponse : public Ec2Response {
    Q_OBJECT

public:
    DeprovisionIpamPoolCidrResponse(const DeprovisionIpamPoolCidrRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeprovisionIpamPoolCidrRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeprovisionIpamPoolCidrResponse)
    Q_DISABLE_COPY(DeprovisionIpamPoolCidrResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
