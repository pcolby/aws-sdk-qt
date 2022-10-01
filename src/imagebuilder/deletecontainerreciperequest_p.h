// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTAINERRECIPEREQUEST_P_H
#define QTAWS_DELETECONTAINERRECIPEREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "deletecontainerreciperequest.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteContainerRecipeRequest;

class DeleteContainerRecipeRequestPrivate : public ImageBuilderRequestPrivate {

public:
    DeleteContainerRecipeRequestPrivate(const ImageBuilderRequest::Action action,
                                   DeleteContainerRecipeRequest * const q);
    DeleteContainerRecipeRequestPrivate(const DeleteContainerRecipeRequestPrivate &other,
                                   DeleteContainerRecipeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteContainerRecipeRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
