// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECLINEINVITATIONSREQUEST_H
#define QTAWS_DECLINEINVITATIONSREQUEST_H

#include "securityhubrequest.h"

namespace QtAws {
namespace SecurityHub {

class DeclineInvitationsRequestPrivate;

class QTAWSSECURITYHUB_EXPORT DeclineInvitationsRequest : public SecurityHubRequest {

public:
    DeclineInvitationsRequest(const DeclineInvitationsRequest &other);
    DeclineInvitationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeclineInvitationsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
