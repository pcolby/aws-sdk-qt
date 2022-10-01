// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSOCIATEDIPV6POOLCIDRSRESPONSE_H
#define QTAWS_GETASSOCIATEDIPV6POOLCIDRSRESPONSE_H

#include "ec2response.h"
#include "getassociatedipv6poolcidrsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetAssociatedIpv6PoolCidrsResponsePrivate;

class QTAWSEC2_EXPORT GetAssociatedIpv6PoolCidrsResponse : public Ec2Response {
    Q_OBJECT

public:
    GetAssociatedIpv6PoolCidrsResponse(const GetAssociatedIpv6PoolCidrsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAssociatedIpv6PoolCidrsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssociatedIpv6PoolCidrsResponse)
    Q_DISABLE_COPY(GetAssociatedIpv6PoolCidrsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
