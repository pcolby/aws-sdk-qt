// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETADMINISTRATORACCOUNTREQUEST_H
#define QTAWS_GETADMINISTRATORACCOUNTREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetAdministratorAccountRequestPrivate;

class QTAWSSECURITYHUB_EXPORT GetAdministratorAccountRequest : public SecurityHubRequest {

public:
    GetAdministratorAccountRequest(const GetAdministratorAccountRequest &other);
    GetAdministratorAccountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAdministratorAccountRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
