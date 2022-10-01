// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFERENCEPREFERENCEREQUEST_P_H
#define QTAWS_GETCONFERENCEPREFERENCEREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "getconferencepreferencerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class GetConferencePreferenceRequest;

class GetConferencePreferenceRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    GetConferencePreferenceRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   GetConferencePreferenceRequest * const q);
    GetConferencePreferenceRequestPrivate(const GetConferencePreferenceRequestPrivate &other,
                                   GetConferencePreferenceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConferencePreferenceRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
