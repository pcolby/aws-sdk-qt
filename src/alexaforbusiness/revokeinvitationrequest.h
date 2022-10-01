// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEINVITATIONREQUEST_H
#define QTAWS_REVOKEINVITATIONREQUEST_H

#include "alexaforbusinessrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class RevokeInvitationRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT RevokeInvitationRequest : public AlexaForBusinessRequest {

public:
    RevokeInvitationRequest(const RevokeInvitationRequest &other);
    RevokeInvitationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeInvitationRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
