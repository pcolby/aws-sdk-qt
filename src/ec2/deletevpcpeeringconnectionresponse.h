// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCPEERINGCONNECTIONRESPONSE_H
#define QTAWS_DELETEVPCPEERINGCONNECTIONRESPONSE_H

#include "ec2response.h"
#include "deletevpcpeeringconnectionrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpcPeeringConnectionResponsePrivate;

class QTAWSEC2_EXPORT DeleteVpcPeeringConnectionResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteVpcPeeringConnectionResponse(const DeleteVpcPeeringConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVpcPeeringConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVpcPeeringConnectionResponse)
    Q_DISABLE_COPY(DeleteVpcPeeringConnectionResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
