// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBPROXYRESPONSE_H
#define QTAWS_DELETEDBPROXYRESPONSE_H

#include "rdsresponse.h"
#include "deletedbproxyrequest.h"

namespace QtAws {
namespace Rds {

class DeleteDBProxyResponsePrivate;

class QTAWSRDS_EXPORT DeleteDBProxyResponse : public RdsResponse {
    Q_OBJECT

public:
    DeleteDBProxyResponse(const DeleteDBProxyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDBProxyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBProxyResponse)
    Q_DISABLE_COPY(DeleteDBProxyResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
