// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEIPAMPOOLALLOCATIONRESPONSE_H
#define QTAWS_RELEASEIPAMPOOLALLOCATIONRESPONSE_H

#include "ec2response.h"
#include "releaseipampoolallocationrequest.h"

namespace QtAws {
namespace Ec2 {

class ReleaseIpamPoolAllocationResponsePrivate;

class QTAWSEC2_EXPORT ReleaseIpamPoolAllocationResponse : public Ec2Response {
    Q_OBJECT

public:
    ReleaseIpamPoolAllocationResponse(const ReleaseIpamPoolAllocationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReleaseIpamPoolAllocationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReleaseIpamPoolAllocationResponse)
    Q_DISABLE_COPY(ReleaseIpamPoolAllocationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
