// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTTRACKERREQUEST_P_H
#define QTAWS_CREATEEVENTTRACKERREQUEST_P_H

#include "personalizerequest_p.h"
#include "createeventtrackerrequest.h"

namespace QtAws {
namespace Personalize {

class CreateEventTrackerRequest;

class CreateEventTrackerRequestPrivate : public PersonalizeRequestPrivate {

public:
    CreateEventTrackerRequestPrivate(const PersonalizeRequest::Action action,
                                   CreateEventTrackerRequest * const q);
    CreateEventTrackerRequestPrivate(const CreateEventTrackerRequestPrivate &other,
                                   CreateEventTrackerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEventTrackerRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
