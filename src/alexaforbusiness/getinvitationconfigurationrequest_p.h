// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINVITATIONCONFIGURATIONREQUEST_P_H
#define QTAWS_GETINVITATIONCONFIGURATIONREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "getinvitationconfigurationrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetInvitationConfigurationRequest;

class GetInvitationConfigurationRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    GetInvitationConfigurationRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   GetInvitationConfigurationRequest * const q);
    GetInvitationConfigurationRequestPrivate(const GetInvitationConfigurationRequestPrivate &other,
                                   GetInvitationConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInvitationConfigurationRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
