// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCPEERINGCONNECTIONRESPONSE_H
#define QTAWS_CREATEVPCPEERINGCONNECTIONRESPONSE_H

#include "ec2response.h"
#include "createvpcpeeringconnectionrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateVpcPeeringConnectionResponsePrivate;

class QTAWSEC2_EXPORT CreateVpcPeeringConnectionResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateVpcPeeringConnectionResponse(const CreateVpcPeeringConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVpcPeeringConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpcPeeringConnectionResponse)
    Q_DISABLE_COPY(CreateVpcPeeringConnectionResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
