// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTADMINISTRATORINVITATIONREQUEST_H
#define QTAWS_ACCEPTADMINISTRATORINVITATIONREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class AcceptAdministratorInvitationRequestPrivate;

class QTAWSSECURITYHUB_EXPORT AcceptAdministratorInvitationRequest : public SecurityHubRequest {

public:
    AcceptAdministratorInvitationRequest(const AcceptAdministratorInvitationRequest &other);
    AcceptAdministratorInvitationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptAdministratorInvitationRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
