// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESECURITYHUBREQUEST_H
#define QTAWS_ENABLESECURITYHUBREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class EnableSecurityHubRequestPrivate;

class QTAWSSECURITYHUB_EXPORT EnableSecurityHubRequest : public SecurityHubRequest {

public:
    EnableSecurityHubRequest(const EnableSecurityHubRequest &other);
    EnableSecurityHubRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableSecurityHubRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
