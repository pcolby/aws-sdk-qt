// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECIPEREQUEST_P_H
#define QTAWS_CREATERECIPEREQUEST_P_H

#include "databrewrequest_p.h"
#include "createreciperequest.h"

namespace QtAws {
namespace DataBrew {

class CreateRecipeRequest;

class CreateRecipeRequestPrivate : public DataBrewRequestPrivate {

public:
    CreateRecipeRequestPrivate(const DataBrewRequest::Action action,
                                   CreateRecipeRequest * const q);
    CreateRecipeRequestPrivate(const CreateRecipeRequestPrivate &other,
                                   CreateRecipeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRecipeRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
