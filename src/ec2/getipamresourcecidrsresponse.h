// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPAMRESOURCECIDRSRESPONSE_H
#define QTAWS_GETIPAMRESOURCECIDRSRESPONSE_H

#include "ec2response.h"
#include "getipamresourcecidrsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetIpamResourceCidrsResponsePrivate;

class QTAWSEC2_EXPORT GetIpamResourceCidrsResponse : public Ec2Response {
    Q_OBJECT

public:
    GetIpamResourceCidrsResponse(const GetIpamResourceCidrsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIpamResourceCidrsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIpamResourceCidrsResponse)
    Q_DISABLE_COPY(GetIpamResourceCidrsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
