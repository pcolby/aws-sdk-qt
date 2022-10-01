// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVITATIONSCOUNTREQUEST_H
#define QTAWS_GETINVITATIONSCOUNTREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class GetInvitationsCountRequestPrivate;

class QTAWSSECURITYHUB_EXPORT GetInvitationsCountRequest : public SecurityHubRequest {

public:
    GetInvitationsCountRequest(const GetInvitationsCountRequest &other);
    GetInvitationsCountRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInvitationsCountRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
