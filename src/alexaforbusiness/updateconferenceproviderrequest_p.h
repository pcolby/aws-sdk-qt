// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFERENCEPROVIDERREQUEST_P_H
#define QTAWS_UPDATECONFERENCEPROVIDERREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "updateconferenceproviderrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateConferenceProviderRequest;

class UpdateConferenceProviderRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    UpdateConferenceProviderRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   UpdateConferenceProviderRequest * const q);
    UpdateConferenceProviderRequestPrivate(const UpdateConferenceProviderRequestPrivate &other,
                                   UpdateConferenceProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConferenceProviderRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
