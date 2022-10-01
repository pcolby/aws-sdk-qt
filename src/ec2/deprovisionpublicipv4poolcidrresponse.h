// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPROVISIONPUBLICIPV4POOLCIDRRESPONSE_H
#define QTAWS_DEPROVISIONPUBLICIPV4POOLCIDRRESPONSE_H

#include "ec2response.h"
#include "deprovisionpublicipv4poolcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class DeprovisionPublicIpv4PoolCidrResponsePrivate;

class QTAWSEC2_EXPORT DeprovisionPublicIpv4PoolCidrResponse : public Ec2Response {
    Q_OBJECT

public:
    DeprovisionPublicIpv4PoolCidrResponse(const DeprovisionPublicIpv4PoolCidrRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeprovisionPublicIpv4PoolCidrRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeprovisionPublicIpv4PoolCidrResponse)
    Q_DISABLE_COPY(DeprovisionPublicIpv4PoolCidrResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
