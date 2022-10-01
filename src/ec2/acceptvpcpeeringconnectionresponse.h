// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTVPCPEERINGCONNECTIONRESPONSE_H
#define QTAWS_ACCEPTVPCPEERINGCONNECTIONRESPONSE_H

#include "ec2response.h"
#include "acceptvpcpeeringconnectionrequest.h"

namespace QtAws {
namespace Ec2 {

class AcceptVpcPeeringConnectionResponsePrivate;

class QTAWSEC2_EXPORT AcceptVpcPeeringConnectionResponse : public Ec2Response {
    Q_OBJECT

public:
    AcceptVpcPeeringConnectionResponse(const AcceptVpcPeeringConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptVpcPeeringConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptVpcPeeringConnectionResponse)
    Q_DISABLE_COPY(AcceptVpcPeeringConnectionResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
