// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESOLUTIONREQUEST_P_H
#define QTAWS_CREATESOLUTIONREQUEST_P_H

#include "personalizerequest_p.h"
#include "createsolutionrequest.h"

namespace QtAws {
namespace Personalize {

class CreateSolutionRequest;

class CreateSolutionRequestPrivate : public PersonalizeRequestPrivate {

public:
    CreateSolutionRequestPrivate(const PersonalizeRequest::Action action,
                                   CreateSolutionRequest * const q);
    CreateSolutionRequestPrivate(const CreateSolutionRequestPrivate &other,
                                   CreateSolutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSolutionRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
