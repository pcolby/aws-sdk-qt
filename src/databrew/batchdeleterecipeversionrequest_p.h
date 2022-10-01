// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETERECIPEVERSIONREQUEST_P_H
#define QTAWS_BATCHDELETERECIPEVERSIONREQUEST_P_H

#include "databrewrequest_p.h"
#include "batchdeleterecipeversionrequest.h"

namespace QtAws {
namespace DataBrew {

class BatchDeleteRecipeVersionRequest;

class BatchDeleteRecipeVersionRequestPrivate : public DataBrewRequestPrivate {

public:
    BatchDeleteRecipeVersionRequestPrivate(const DataBrewRequest::Action action,
                                   BatchDeleteRecipeVersionRequest * const q);
    BatchDeleteRecipeVersionRequestPrivate(const BatchDeleteRecipeVersionRequestPrivate &other,
                                   BatchDeleteRecipeVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDeleteRecipeVersionRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
