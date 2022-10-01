// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECIPESREQUEST_P_H
#define QTAWS_LISTRECIPESREQUEST_P_H

#include "databrewrequest_p.h"
#include "listrecipesrequest.h"

namespace QtAws {
namespace DataBrew {

class ListRecipesRequest;

class ListRecipesRequestPrivate : public DataBrewRequestPrivate {

public:
    ListRecipesRequestPrivate(const DataBrewRequest::Action action,
                                   ListRecipesRequest * const q);
    ListRecipesRequestPrivate(const ListRecipesRequestPrivate &other,
                                   ListRecipesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRecipesRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
