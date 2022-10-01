// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHINTERNETGATEWAYRESPONSE_H
#define QTAWS_ATTACHINTERNETGATEWAYRESPONSE_H

#include "ec2response.h"
#include "attachinternetgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class AttachInternetGatewayResponsePrivate;

class QTAWSEC2_EXPORT AttachInternetGatewayResponse : public Ec2Response {
    Q_OBJECT

public:
    AttachInternetGatewayResponse(const AttachInternetGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachInternetGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachInternetGatewayResponse)
    Q_DISABLE_COPY(AttachInternetGatewayResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
