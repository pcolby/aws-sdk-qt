// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESOLUTIONREQUEST_P_H
#define QTAWS_DELETESOLUTIONREQUEST_P_H

#include "personalizerequest_p.h"
#include "deletesolutionrequest.h"

namespace QtAws {
namespace Personalize {

class DeleteSolutionRequest;

class DeleteSolutionRequestPrivate : public PersonalizeRequestPrivate {

public:
    DeleteSolutionRequestPrivate(const PersonalizeRequest::Action action,
                                   DeleteSolutionRequest * const q);
    DeleteSolutionRequestPrivate(const DeleteSolutionRequestPrivate &other,
                                   DeleteSolutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSolutionRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
