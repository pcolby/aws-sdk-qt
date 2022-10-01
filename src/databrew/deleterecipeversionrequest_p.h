// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECIPEVERSIONREQUEST_P_H
#define QTAWS_DELETERECIPEVERSIONREQUEST_P_H

#include "databrewrequest_p.h"
#include "deleterecipeversionrequest.h"

namespace QtAws {
namespace DataBrew {

class DeleteRecipeVersionRequest;

class DeleteRecipeVersionRequestPrivate : public DataBrewRequestPrivate {

public:
    DeleteRecipeVersionRequestPrivate(const DataBrewRequest::Action action,
                                   DeleteRecipeVersionRequest * const q);
    DeleteRecipeVersionRequestPrivate(const DeleteRecipeVersionRequestPrivate &other,
                                   DeleteRecipeVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRecipeVersionRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
