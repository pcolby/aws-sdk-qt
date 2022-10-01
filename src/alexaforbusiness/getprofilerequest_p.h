// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROFILEREQUEST_P_H
#define QTAWS_GETPROFILEREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "getprofilerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetProfileRequest;

class GetProfileRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    GetProfileRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   GetProfileRequest * const q);
    GetProfileRequestPrivate(const GetProfileRequestPrivate &other,
                                   GetProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetProfileRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
