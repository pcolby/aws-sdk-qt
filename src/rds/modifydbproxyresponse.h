// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBPROXYRESPONSE_H
#define QTAWS_MODIFYDBPROXYRESPONSE_H

#include "rdsresponse.h"
#include "modifydbproxyrequest.h"

namespace QtAws {
namespace Rds {

class ModifyDBProxyResponsePrivate;

class QTAWSRDS_EXPORT ModifyDBProxyResponse : public RdsResponse {
    Q_OBJECT

public:
    ModifyDBProxyResponse(const ModifyDBProxyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyDBProxyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBProxyResponse)
    Q_DISABLE_COPY(ModifyDBProxyResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
