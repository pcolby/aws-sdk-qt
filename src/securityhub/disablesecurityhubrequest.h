// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESECURITYHUBREQUEST_H
#define QTAWS_DISABLESECURITYHUBREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class DisableSecurityHubRequestPrivate;

class QTAWSSECURITYHUB_EXPORT DisableSecurityHubRequest : public SecurityHubRequest {

public:
    DisableSecurityHubRequest(const DisableSecurityHubRequest &other);
    DisableSecurityHubRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableSecurityHubRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
