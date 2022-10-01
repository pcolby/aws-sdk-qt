// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGERECIPEREQUEST_P_H
#define QTAWS_GETIMAGERECIPEREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "getimagereciperequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetImageRecipeRequest;

class GetImageRecipeRequestPrivate : public ImageBuilderRequestPrivate {

public:
    GetImageRecipeRequestPrivate(const ImageBuilderRequest::Action action,
                                   GetImageRecipeRequest * const q);
    GetImageRecipeRequestPrivate(const GetImageRecipeRequestPrivate &other,
                                   GetImageRecipeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetImageRecipeRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
