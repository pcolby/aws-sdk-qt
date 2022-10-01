// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYHUBCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATESECURITYHUBCONFIGURATIONRESPONSE_H

#include "securityhubresponse.h"
#include "updatesecurityhubconfigurationrequest.h"

namespace QtAws {
namespace SecurityHub {

class UpdateSecurityHubConfigurationResponsePrivate;

class QTAWSSECURITYHUB_EXPORT UpdateSecurityHubConfigurationResponse : public SecurityHubResponse {
    Q_OBJECT

public:
    UpdateSecurityHubConfigurationResponse(const UpdateSecurityHubConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSecurityHubConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSecurityHubConfigurationResponse)
    Q_DISABLE_COPY(UpdateSecurityHubConfigurationResponse)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
