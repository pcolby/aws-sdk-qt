// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONPUBLICIPV4POOLCIDRRESPONSE_H
#define QTAWS_PROVISIONPUBLICIPV4POOLCIDRRESPONSE_H

#include "ec2response.h"
#include "provisionpublicipv4poolcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class ProvisionPublicIpv4PoolCidrResponsePrivate;

class QTAWSEC2_EXPORT ProvisionPublicIpv4PoolCidrResponse : public Ec2Response {
    Q_OBJECT

public:
    ProvisionPublicIpv4PoolCidrResponse(const ProvisionPublicIpv4PoolCidrRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ProvisionPublicIpv4PoolCidrRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ProvisionPublicIpv4PoolCidrResponse)
    Q_DISABLE_COPY(ProvisionPublicIpv4PoolCidrResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
