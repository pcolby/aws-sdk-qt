// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEORGANIZATIONADMINACCOUNTREQUEST_H
#define QTAWS_ENABLEORGANIZATIONADMINACCOUNTREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class EnableOrganizationAdminAccountRequestPrivate;

class QTAWSSECURITYHUB_EXPORT EnableOrganizationAdminAccountRequest : public SecurityHubRequest {

public:
    EnableOrganizationAdminAccountRequest(const EnableOrganizationAdminAccountRequest &other);
    EnableOrganizationAdminAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableOrganizationAdminAccountRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
