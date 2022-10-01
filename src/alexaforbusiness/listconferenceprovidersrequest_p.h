// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFERENCEPROVIDERSREQUEST_P_H
#define QTAWS_LISTCONFERENCEPROVIDERSREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "listconferenceprovidersrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListConferenceProvidersRequest;

class ListConferenceProvidersRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    ListConferenceProvidersRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   ListConferenceProvidersRequest * const q);
    ListConferenceProvidersRequestPrivate(const ListConferenceProvidersRequestPrivate &other,
                                   ListConferenceProvidersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListConferenceProvidersRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
