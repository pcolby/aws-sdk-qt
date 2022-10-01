// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROVISIONIPAMPOOLCIDRRESPONSE_H
#define QTAWS_PROVISIONIPAMPOOLCIDRRESPONSE_H

#include "ec2response.h"
#include "provisionipampoolcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class ProvisionIpamPoolCidrResponsePrivate;

class QTAWSEC2_EXPORT ProvisionIpamPoolCidrResponse : public Ec2Response {
    Q_OBJECT

public:
    ProvisionIpamPoolCidrResponse(const ProvisionIpamPoolCidrRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ProvisionIpamPoolCidrRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ProvisionIpamPoolCidrResponse)
    Q_DISABLE_COPY(ProvisionIpamPoolCidrResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
