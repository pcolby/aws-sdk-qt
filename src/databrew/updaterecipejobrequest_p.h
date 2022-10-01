// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECIPEJOBREQUEST_P_H
#define QTAWS_UPDATERECIPEJOBREQUEST_P_H

#include "databrewrequest_p.h"
#include "updaterecipejobrequest.h"

namespace QtAws {
namespace DataBrew {

class UpdateRecipeJobRequest;

class UpdateRecipeJobRequestPrivate : public DataBrewRequestPrivate {

public:
    UpdateRecipeJobRequestPrivate(const DataBrewRequest::Action action,
                                   UpdateRecipeJobRequest * const q);
    UpdateRecipeJobRequestPrivate(const UpdateRecipeJobRequestPrivate &other,
                                   UpdateRecipeJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRecipeJobRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
