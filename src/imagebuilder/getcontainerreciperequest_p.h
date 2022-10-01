// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERRECIPEREQUEST_P_H
#define QTAWS_GETCONTAINERRECIPEREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "getcontainerreciperequest.h"

namespace QtAws {
namespace ImageBuilder {

class GetContainerRecipeRequest;

class GetContainerRecipeRequestPrivate : public ImageBuilderRequestPrivate {

public:
    GetContainerRecipeRequestPrivate(const ImageBuilderRequest::Action action,
                                   GetContainerRecipeRequest * const q);
    GetContainerRecipeRequestPrivate(const GetContainerRecipeRequestPrivate &other,
                                   GetContainerRecipeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContainerRecipeRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
