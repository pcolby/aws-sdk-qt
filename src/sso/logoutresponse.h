// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOGOUTRESPONSE_H
#define QTAWS_LOGOUTRESPONSE_H

#include "ssoresponse.h"
#include "logoutrequest.h"

namespace QtAws {
namespace Sso {

class LogoutResponsePrivate;

class QTAWSSSO_EXPORT LogoutResponse : public SsoResponse {
    Q_OBJECT

public:
    LogoutResponse(const LogoutRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const LogoutRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LogoutResponse)
    Q_DISABLE_COPY(LogoutResponse)

};

} // namespace Sso
} // namespace QtAws

#endif
