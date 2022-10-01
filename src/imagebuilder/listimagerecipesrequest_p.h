// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGERECIPESREQUEST_P_H
#define QTAWS_LISTIMAGERECIPESREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "listimagerecipesrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListImageRecipesRequest;

class ListImageRecipesRequestPrivate : public ImageBuilderRequestPrivate {

public:
    ListImageRecipesRequestPrivate(const ImageBuilderRequest::Action action,
                                   ListImageRecipesRequest * const q);
    ListImageRecipesRequestPrivate(const ListImageRecipesRequestPrivate &other,
                                   ListImageRecipesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListImageRecipesRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
