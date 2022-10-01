// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEGRESSONLYINTERNETGATEWAYRESPONSE_H
#define QTAWS_DELETEEGRESSONLYINTERNETGATEWAYRESPONSE_H

#include "ec2response.h"
#include "deleteegressonlyinternetgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteEgressOnlyInternetGatewayResponsePrivate;

class QTAWSEC2_EXPORT DeleteEgressOnlyInternetGatewayResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteEgressOnlyInternetGatewayResponse(const DeleteEgressOnlyInternetGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEgressOnlyInternetGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEgressOnlyInternetGatewayResponse)
    Q_DISABLE_COPY(DeleteEgressOnlyInternetGatewayResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
