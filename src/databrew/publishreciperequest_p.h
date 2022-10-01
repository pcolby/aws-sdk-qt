// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHRECIPEREQUEST_P_H
#define QTAWS_PUBLISHRECIPEREQUEST_P_H

#include "databrewrequest_p.h"
#include "publishreciperequest.h"

namespace QtAws {
namespace DataBrew {

class PublishRecipeRequest;

class PublishRecipeRequestPrivate : public DataBrewRequestPrivate {

public:
    PublishRecipeRequestPrivate(const DataBrewRequest::Action action,
                                   PublishRecipeRequest * const q);
    PublishRecipeRequestPrivate(const PublishRecipeRequestPrivate &other,
                                   PublishRecipeRequest * const q);

private:
    Q_DECLARE_PUBLIC(PublishRecipeRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
