// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGERECIPEREQUEST_P_H
#define QTAWS_DELETEIMAGERECIPEREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "deleteimagereciperequest.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteImageRecipeRequest;

class DeleteImageRecipeRequestPrivate : public ImageBuilderRequestPrivate {

public:
    DeleteImageRecipeRequestPrivate(const ImageBuilderRequest::Action action,
                                   DeleteImageRecipeRequest * const q);
    DeleteImageRecipeRequestPrivate(const DeleteImageRecipeRequestPrivate &other,
                                   DeleteImageRecipeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteImageRecipeRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
