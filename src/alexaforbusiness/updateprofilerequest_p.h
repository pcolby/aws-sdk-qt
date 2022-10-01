// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROFILEREQUEST_P_H
#define QTAWS_UPDATEPROFILEREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "updateprofilerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class UpdateProfileRequest;

class UpdateProfileRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    UpdateProfileRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   UpdateProfileRequest * const q);
    UpdateProfileRequestPrivate(const UpdateProfileRequestPrivate &other,
                                   UpdateProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateProfileRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
