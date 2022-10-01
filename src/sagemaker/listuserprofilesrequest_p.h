// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERPROFILESREQUEST_P_H
#define QTAWS_LISTUSERPROFILESREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listuserprofilesrequest.h"

namespace QtAws {
namespace SageMaker {

class ListUserProfilesRequest;

class ListUserProfilesRequestPrivate : public SageMakerRequestPrivate {

public:
    ListUserProfilesRequestPrivate(const SageMakerRequest::Action action,
                                   ListUserProfilesRequest * const q);
    ListUserProfilesRequestPrivate(const ListUserProfilesRequestPrivate &other,
                                   ListUserProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUserProfilesRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
