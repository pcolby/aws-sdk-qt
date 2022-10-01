// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSOLUTIONVERSIONSREQUEST_P_H
#define QTAWS_LISTSOLUTIONVERSIONSREQUEST_P_H

#include "personalizerequest_p.h"
#include "listsolutionversionsrequest.h"

namespace QtAws {
namespace Personalize {

class ListSolutionVersionsRequest;

class ListSolutionVersionsRequestPrivate : public PersonalizeRequestPrivate {

public:
    ListSolutionVersionsRequestPrivate(const PersonalizeRequest::Action action,
                                   ListSolutionVersionsRequest * const q);
    ListSolutionVersionsRequestPrivate(const ListSolutionVersionsRequestPrivate &other,
                                   ListSolutionVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSolutionVersionsRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
