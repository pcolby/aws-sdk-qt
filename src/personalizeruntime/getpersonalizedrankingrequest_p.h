// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERSONALIZEDRANKINGREQUEST_P_H
#define QTAWS_GETPERSONALIZEDRANKINGREQUEST_P_H

#include "personalizeruntimerequest_p.h"
#include "getpersonalizedrankingrequest.h"

namespace QtAws {
namespace PersonalizeRuntime {

class GetPersonalizedRankingRequest;

class GetPersonalizedRankingRequestPrivate : public PersonalizeRuntimeRequestPrivate {

public:
    GetPersonalizedRankingRequestPrivate(const PersonalizeRuntimeRequest::Action action,
                                   GetPersonalizedRankingRequest * const q);
    GetPersonalizedRankingRequestPrivate(const GetPersonalizedRankingRequestPrivate &other,
                                   GetPersonalizedRankingRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPersonalizedRankingRequest)

};

} // namespace PersonalizeRuntime
} // namespace QtAws

#endif
