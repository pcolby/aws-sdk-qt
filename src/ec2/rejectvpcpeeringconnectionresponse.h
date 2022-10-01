// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTVPCPEERINGCONNECTIONRESPONSE_H
#define QTAWS_REJECTVPCPEERINGCONNECTIONRESPONSE_H

#include "ec2response.h"
#include "rejectvpcpeeringconnectionrequest.h"

namespace QtAws {
namespace Ec2 {

class RejectVpcPeeringConnectionResponsePrivate;

class QTAWSEC2_EXPORT RejectVpcPeeringConnectionResponse : public Ec2Response {
    Q_OBJECT

public:
    RejectVpcPeeringConnectionResponse(const RejectVpcPeeringConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectVpcPeeringConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectVpcPeeringConnectionResponse)
    Q_DISABLE_COPY(RejectVpcPeeringConnectionResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
