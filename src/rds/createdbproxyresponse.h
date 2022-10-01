// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBPROXYRESPONSE_H
#define QTAWS_CREATEDBPROXYRESPONSE_H

#include "rdsresponse.h"
#include "createdbproxyrequest.h"

namespace QtAws {
namespace Rds {

class CreateDBProxyResponsePrivate;

class QTAWSRDS_EXPORT CreateDBProxyResponse : public RdsResponse {
    Q_OBJECT

public:
    CreateDBProxyResponse(const CreateDBProxyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDBProxyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBProxyResponse)
    Q_DISABLE_COPY(CreateDBProxyResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
