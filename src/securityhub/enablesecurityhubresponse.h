// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESECURITYHUBRESPONSE_H
#define QTAWS_ENABLESECURITYHUBRESPONSE_H

#include "securityhubresponse.h"
#include "enablesecurityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class EnableSecurityHubResponsePrivate;

class QTAWSSECURITYHUB_EXPORT EnableSecurityHubResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    EnableSecurityHubResponse(const EnableSecurityHubRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableSecurityHubRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableSecurityHubResponse)
    Q_DISABLE_COPY(EnableSecurityHubResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
