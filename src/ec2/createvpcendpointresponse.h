// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCENDPOINTRESPONSE_H
#define QTAWS_CREATEVPCENDPOINTRESPONSE_H

#include "ec2response.h"
#include "createvpcendpointrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateVpcEndpointResponsePrivate;

class QTAWSEC2_EXPORT CreateVpcEndpointResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateVpcEndpointResponse(const CreateVpcEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVpcEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpcEndpointResponse)
    Q_DISABLE_COPY(CreateVpcEndpointResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
