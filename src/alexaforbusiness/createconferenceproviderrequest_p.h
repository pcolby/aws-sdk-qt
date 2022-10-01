// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFERENCEPROVIDERREQUEST_P_H
#define QTAWS_CREATECONFERENCEPROVIDERREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "createconferenceproviderrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class CreateConferenceProviderRequest;

class CreateConferenceProviderRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    CreateConferenceProviderRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   CreateConferenceProviderRequest * const q);
    CreateConferenceProviderRequestPrivate(const CreateConferenceProviderRequestPrivate &other,
                                   CreateConferenceProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConferenceProviderRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
