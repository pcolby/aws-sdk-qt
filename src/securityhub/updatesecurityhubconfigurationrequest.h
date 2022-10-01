// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYHUBCONFIGURATIONREQUEST_H
#define QTAWS_UPDATESECURITYHUBCONFIGURATIONREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class UpdateSecurityHubConfigurationRequestPrivate;

class QTAWSSECURITYHUB_EXPORT UpdateSecurityHubConfigurationRequest : public SecurityHubRequest {

public:
    UpdateSecurityHubConfigurationRequest(const UpdateSecurityHubConfigurationRequest &other);
    UpdateSecurityHubConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSecurityHubConfigurationRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
