// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTTRACKERREQUEST_P_H
#define QTAWS_DELETEEVENTTRACKERREQUEST_P_H

#include "personalizerequest_p.h"
#include "deleteeventtrackerrequest.h"

namespace QtAws {
namespace Personalize {

class DeleteEventTrackerRequest;

class DeleteEventTrackerRequestPrivate : public PersonalizeRequestPrivate {

public:
    DeleteEventTrackerRequestPrivate(const PersonalizeRequest::Action action,
                                   DeleteEventTrackerRequest * const q);
    DeleteEventTrackerRequestPrivate(const DeleteEventTrackerRequestPrivate &other,
                                   DeleteEventTrackerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEventTrackerRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
