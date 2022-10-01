// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESOLUTIONVERSIONREQUEST_P_H
#define QTAWS_CREATESOLUTIONVERSIONREQUEST_P_H

#include "personalizerequest_p.h"
#include "createsolutionversionrequest.h"

namespace QtAws {
namespace Personalize {

class CreateSolutionVersionRequest;

class CreateSolutionVersionRequestPrivate : public PersonalizeRequestPrivate {

public:
    CreateSolutionVersionRequestPrivate(const PersonalizeRequest::Action action,
                                   CreateSolutionVersionRequest * const q);
    CreateSolutionVersionRequestPrivate(const CreateSolutionVersionRequestPrivate &other,
                                   CreateSolutionVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSolutionVersionRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
