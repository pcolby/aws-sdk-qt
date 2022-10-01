// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECIPEJOBREQUEST_P_H
#define QTAWS_CREATERECIPEJOBREQUEST_P_H

#include "databrewrequest_p.h"
#include "createrecipejobrequest.h"

namespace QtAws {
namespace DataBrew {

class CreateRecipeJobRequest;

class CreateRecipeJobRequestPrivate : public DataBrewRequestPrivate {

public:
    CreateRecipeJobRequestPrivate(const DataBrewRequest::Action action,
                                   CreateRecipeJobRequest * const q);
    CreateRecipeJobRequestPrivate(const CreateRecipeJobRequestPrivate &other,
                                   CreateRecipeJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRecipeJobRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
