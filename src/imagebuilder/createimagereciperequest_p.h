// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGERECIPEREQUEST_P_H
#define QTAWS_CREATEIMAGERECIPEREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "createimagereciperequest.h"

namespace QtAws {
namespace ImageBuilder {

class CreateImageRecipeRequest;

class CreateImageRecipeRequestPrivate : public ImageBuilderRequestPrivate {

public:
    CreateImageRecipeRequestPrivate(const ImageBuilderRequest::Action action,
                                   CreateImageRecipeRequest * const q);
    CreateImageRecipeRequestPrivate(const CreateImageRecipeRequestPrivate &other,
                                   CreateImageRecipeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateImageRecipeRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
