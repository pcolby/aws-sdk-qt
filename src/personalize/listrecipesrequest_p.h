// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECIPESREQUEST_P_H
#define QTAWS_LISTRECIPESREQUEST_P_H

#include "personalizerequest_p.h"
#include "listrecipesrequest.h"

namespace QtAws {
namespace Personalize {

class ListRecipesRequest;

class ListRecipesRequestPrivate : public PersonalizeRequestPrivate {

public:
    ListRecipesRequestPrivate(const PersonalizeRequest::Action action,
                                   ListRecipesRequest * const q);
    ListRecipesRequestPrivate(const ListRecipesRequestPrivate &other,
                                   ListRecipesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRecipesRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
