// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCENDPOINTRESPONSE_H
#define QTAWS_MODIFYVPCENDPOINTRESPONSE_H

#include "ec2response.h"
#include "modifyvpcendpointrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcEndpointResponsePrivate;

class QTAWSEC2_EXPORT ModifyVpcEndpointResponse : public Ec2Response {
    Q_OBJECT

public:
    ModifyVpcEndpointResponse(const ModifyVpcEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyVpcEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVpcEndpointResponse)
    Q_DISABLE_COPY(ModifyVpcEndpointResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
