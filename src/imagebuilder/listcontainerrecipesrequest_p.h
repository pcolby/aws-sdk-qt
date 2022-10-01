// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTAINERRECIPESREQUEST_P_H
#define QTAWS_LISTCONTAINERRECIPESREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "listcontainerrecipesrequest.h"

namespace QtAws {
namespace ImageBuilder {

class ListContainerRecipesRequest;

class ListContainerRecipesRequestPrivate : public ImageBuilderRequestPrivate {

public:
    ListContainerRecipesRequestPrivate(const ImageBuilderRequest::Action action,
                                   ListContainerRecipesRequest * const q);
    ListContainerRecipesRequestPrivate(const ListContainerRecipesRequestPrivate &other,
                                   ListContainerRecipesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListContainerRecipesRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
