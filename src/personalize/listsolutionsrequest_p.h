// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSOLUTIONSREQUEST_P_H
#define QTAWS_LISTSOLUTIONSREQUEST_P_H

#include "personalizerequest_p.h"
#include "listsolutionsrequest.h"

namespace QtAws {
namespace Personalize {

class ListSolutionsRequest;

class ListSolutionsRequestPrivate : public PersonalizeRequestPrivate {

public:
    ListSolutionsRequestPrivate(const PersonalizeRequest::Action action,
                                   ListSolutionsRequest * const q);
    ListSolutionsRequestPrivate(const ListSolutionsRequestPrivate &other,
                                   ListSolutionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSolutionsRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
