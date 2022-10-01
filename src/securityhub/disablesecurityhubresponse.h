// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESECURITYHUBRESPONSE_H
#define QTAWS_DISABLESECURITYHUBRESPONSE_H

#include "securityhubresponse.h"
#include "disablesecurityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class DisableSecurityHubResponsePrivate;

class QTAWSSECURITYHUB_EXPORT DisableSecurityHubResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    DisableSecurityHubResponse(const DisableSecurityHubRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableSecurityHubRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableSecurityHubResponse)
    Q_DISABLE_COPY(DisableSecurityHubResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
