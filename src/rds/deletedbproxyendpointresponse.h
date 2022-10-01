// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBPROXYENDPOINTRESPONSE_H
#define QTAWS_DELETEDBPROXYENDPOINTRESPONSE_H

#include "rdsresponse.h"
#include "deletedbproxyendpointrequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBProxyEndpointResponsePrivate;

class QTAWSRDS_EXPORT DeleteDBProxyEndpointResponse : public RdsResponse {
    Q_OBJECT

public:
    DeleteDBProxyEndpointResponse(const DeleteDBProxyEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDBProxyEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBProxyEndpointResponse)
    Q_DISABLE_COPY(DeleteDBProxyEndpointResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
