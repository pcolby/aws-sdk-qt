// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEIPAMPOOLCIDRRESPONSE_H
#define QTAWS_ALLOCATEIPAMPOOLCIDRRESPONSE_H

#include "ec2response.h"
#include "allocateipampoolcidrrequest.h"

namespace QtAws {
namespace Ec2 {

class AllocateIpamPoolCidrResponsePrivate;

class QTAWSEC2_EXPORT AllocateIpamPoolCidrResponse : public Ec2Response {
    Q_OBJECT

public:
    AllocateIpamPoolCidrResponse(const AllocateIpamPoolCidrRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AllocateIpamPoolCidrRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AllocateIpamPoolCidrResponse)
    Q_DISABLE_COPY(AllocateIpamPoolCidrResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
