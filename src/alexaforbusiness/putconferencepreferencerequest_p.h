// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFERENCEPREFERENCEREQUEST_P_H
#define QTAWS_PUTCONFERENCEPREFERENCEREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "putconferencepreferencerequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class PutConferencePreferenceRequest;

class PutConferencePreferenceRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    PutConferencePreferenceRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   PutConferencePreferenceRequest * const q);
    PutConferencePreferenceRequestPrivate(const PutConferencePreferenceRequestPrivate &other,
                                   PutConferencePreferenceRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutConferencePreferenceRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
