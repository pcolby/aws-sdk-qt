// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERDBPROXYTARGETSRESPONSE_H
#define QTAWS_DEREGISTERDBPROXYTARGETSRESPONSE_H

#include "rdsresponse.h"
#include "deregisterdbproxytargetsrequest.h"

namespace QtAws {
namespace Rds {

class DeregisterDBProxyTargetsResponsePrivate;

class QTAWSRDS_EXPORT DeregisterDBProxyTargetsResponse : public RdsResponse {
    Q_OBJECT

public:
    DeregisterDBProxyTargetsResponse(const DeregisterDBProxyTargetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterDBProxyTargetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterDBProxyTargetsResponse)
    Q_DISABLE_COPY(DeregisterDBProxyTargetsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
