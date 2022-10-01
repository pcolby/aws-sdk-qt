// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDBPROXYTARGETSRESPONSE_H
#define QTAWS_REGISTERDBPROXYTARGETSRESPONSE_H

#include "rdsresponse.h"
#include "registerdbproxytargetsrequest.h"

namespace QtAws {
namespace Rds {

class RegisterDBProxyTargetsResponsePrivate;

class QTAWSRDS_EXPORT RegisterDBProxyTargetsResponse : public RdsResponse {
    Q_OBJECT

public:
    RegisterDBProxyTargetsResponse(const RegisterDBProxyTargetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterDBProxyTargetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterDBProxyTargetsResponse)
    Q_DISABLE_COPY(RegisterDBProxyTargetsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
