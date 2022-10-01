// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTINVITATIONREQUEST_H
#define QTAWS_ACCEPTINVITATIONREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class AcceptInvitationRequestPrivate;

class QTAWSSECURITYHUB_EXPORT AcceptInvitationRequest : public SecurityHubRequest {

public:
    AcceptInvitationRequest(const AcceptInvitationRequest &other);
    AcceptInvitationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptInvitationRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
