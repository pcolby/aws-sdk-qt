// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBPROXYENDPOINTRESPONSE_H
#define QTAWS_MODIFYDBPROXYENDPOINTRESPONSE_H

#include "rdsresponse.h"
#include "modifydbproxyendpointrequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBProxyEndpointResponsePrivate;

class QTAWSRDS_EXPORT ModifyDBProxyEndpointResponse : public RdsResponse {
    Q_OBJECT

public:
    ModifyDBProxyEndpointResponse(const ModifyDBProxyEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyDBProxyEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBProxyEndpointResponse)
    Q_DISABLE_COPY(ModifyDBProxyEndpointResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
