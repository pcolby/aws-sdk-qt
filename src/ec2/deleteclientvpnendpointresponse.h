// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECLIENTVPNENDPOINTRESPONSE_H
#define QTAWS_DELETECLIENTVPNENDPOINTRESPONSE_H

#include "ec2response.h"
#include "deleteclientvpnendpointrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteClientVpnEndpointResponsePrivate;

class QTAWSEC2_EXPORT DeleteClientVpnEndpointResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteClientVpnEndpointResponse(const DeleteClientVpnEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteClientVpnEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClientVpnEndpointResponse)
    Q_DISABLE_COPY(DeleteClientVpnEndpointResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
