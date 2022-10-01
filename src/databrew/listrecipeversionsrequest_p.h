// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECIPEVERSIONSREQUEST_P_H
#define QTAWS_LISTRECIPEVERSIONSREQUEST_P_H

#include "databrewrequest_p.h"
#include "listrecipeversionsrequest.h"

namespace QtAws {
namespace DataBrew {

class ListRecipeVersionsRequest;

class ListRecipeVersionsRequestPrivate : public DataBrewRequestPrivate {

public:
    ListRecipeVersionsRequestPrivate(const DataBrewRequest::Action action,
                                   ListRecipeVersionsRequest * const q);
    ListRecipeVersionsRequestPrivate(const ListRecipeVersionsRequestPrivate &other,
                                   ListRecipeVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRecipeVersionsRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
