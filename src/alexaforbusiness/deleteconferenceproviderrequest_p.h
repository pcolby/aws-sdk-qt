// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFERENCEPROVIDERREQUEST_P_H
#define QTAWS_DELETECONFERENCEPROVIDERREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "deleteconferenceproviderrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class DeleteConferenceProviderRequest;

class DeleteConferenceProviderRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    DeleteConferenceProviderRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   DeleteConferenceProviderRequest * const q);
    DeleteConferenceProviderRequestPrivate(const DeleteConferenceProviderRequestPrivate &other,
                                   DeleteConferenceProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConferenceProviderRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
