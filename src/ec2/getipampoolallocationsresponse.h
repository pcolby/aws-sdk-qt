// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPAMPOOLALLOCATIONSRESPONSE_H
#define QTAWS_GETIPAMPOOLALLOCATIONSRESPONSE_H

#include "ec2response.h"
#include "getipampoolallocationsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetIpamPoolAllocationsResponsePrivate;

class QTAWSEC2_EXPORT GetIpamPoolAllocationsResponse : public Ec2Response {
    Q_OBJECT

public:
    GetIpamPoolAllocationsResponse(const GetIpamPoolAllocationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIpamPoolAllocationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIpamPoolAllocationsResponse)
    Q_DISABLE_COPY(GetIpamPoolAllocationsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
