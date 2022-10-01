// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINTERNETGATEWAYRESPONSE_H
#define QTAWS_DELETEINTERNETGATEWAYRESPONSE_H

#include "ec2response.h"
#include "deleteinternetgatewayrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteInternetGatewayResponsePrivate;

class QTAWSEC2_EXPORT DeleteInternetGatewayResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteInternetGatewayResponse(const DeleteInternetGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteInternetGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInternetGatewayResponse)
    Q_DISABLE_COPY(DeleteInternetGatewayResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
