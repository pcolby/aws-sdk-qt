// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPAMPOOLCIDRSRESPONSE_H
#define QTAWS_GETIPAMPOOLCIDRSRESPONSE_H

#include "ec2response.h"
#include "getipampoolcidrsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetIpamPoolCidrsResponsePrivate;

class QTAWSEC2_EXPORT GetIpamPoolCidrsResponse : public Ec2Response {
    Q_OBJECT

public:
    GetIpamPoolCidrsResponse(const GetIpamPoolCidrsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIpamPoolCidrsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIpamPoolCidrsResponse)
    Q_DISABLE_COPY(GetIpamPoolCidrsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
