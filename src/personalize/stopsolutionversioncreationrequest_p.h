// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSOLUTIONVERSIONCREATIONREQUEST_P_H
#define QTAWS_STOPSOLUTIONVERSIONCREATIONREQUEST_P_H

#include "personalizerequest_p.h"
#include "stopsolutionversioncreationrequest.h"

namespace QtAws {
namespace Personalize {

class StopSolutionVersionCreationRequest;

class StopSolutionVersionCreationRequestPrivate : public PersonalizeRequestPrivate {

public:
    StopSolutionVersionCreationRequestPrivate(const PersonalizeRequest::Action action,
                                   StopSolutionVersionCreationRequest * const q);
    StopSolutionVersionCreationRequestPrivate(const StopSolutionVersionCreationRequestPrivate &other,
                                   StopSolutionVersionCreationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StopSolutionVersionCreationRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
