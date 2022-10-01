// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECIPEREQUEST_P_H
#define QTAWS_UPDATERECIPEREQUEST_P_H

#include "databrewrequest_p.h"
#include "updatereciperequest.h"

namespace QtAws {
namespace DataBrew {

class UpdateRecipeRequest;

class UpdateRecipeRequestPrivate : public DataBrewRequestPrivate {

public:
    UpdateRecipeRequestPrivate(const DataBrewRequest::Action action,
                                   UpdateRecipeRequest * const q);
    UpdateRecipeRequestPrivate(const UpdateRecipeRequestPrivate &other,
                                   UpdateRecipeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRecipeRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
