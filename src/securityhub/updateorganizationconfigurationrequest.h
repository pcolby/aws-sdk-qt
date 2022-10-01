// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEORGANIZATIONCONFIGURATIONREQUEST_H
#define QTAWS_UPDATEORGANIZATIONCONFIGURATIONREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class UpdateOrganizationConfigurationRequestPrivate;

class QTAWSSECURITYHUB_EXPORT UpdateOrganizationConfigurationRequest : public SecurityHubRequest {

public:
    UpdateOrganizationConfigurationRequest(const UpdateOrganizationConfigurationRequest &other);
    UpdateOrganizationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateOrganizationConfigurationRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
