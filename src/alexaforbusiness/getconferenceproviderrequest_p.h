// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFERENCEPROVIDERREQUEST_P_H
#define QTAWS_GETCONFERENCEPROVIDERREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "getconferenceproviderrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetConferenceProviderRequest;

class GetConferenceProviderRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    GetConferenceProviderRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   GetConferenceProviderRequest * const q);
    GetConferenceProviderRequestPrivate(const GetConferenceProviderRequestPrivate &other,
                                   GetConferenceProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConferenceProviderRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
