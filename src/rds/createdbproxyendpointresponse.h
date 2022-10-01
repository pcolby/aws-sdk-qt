// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBPROXYENDPOINTRESPONSE_H
#define QTAWS_CREATEDBPROXYENDPOINTRESPONSE_H

#include "rdsresponse.h"
#include "createdbproxyendpointrequest.h"

namespace QtAws {
namespace Rds {

class CreateDBProxyEndpointResponsePrivate;

class QTAWSRDS_EXPORT CreateDBProxyEndpointResponse : public RdsResponse {
    Q_OBJECT

public:
    CreateDBProxyEndpointResponse(const CreateDBProxyEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDBProxyEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBProxyEndpointResponse)
    Q_DISABLE_COPY(CreateDBProxyEndpointResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
