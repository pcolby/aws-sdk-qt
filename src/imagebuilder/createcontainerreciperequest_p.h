// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTAINERRECIPEREQUEST_P_H
#define QTAWS_CREATECONTAINERRECIPEREQUEST_P_H

#include "imagebuilderrequest_p.h"
#include "createcontainerreciperequest.h"

namespace QtAws {
namespace ImageBuilder {

class CreateContainerRecipeRequest;

class CreateContainerRecipeRequestPrivate : public ImageBuilderRequestPrivate {

public:
    CreateContainerRecipeRequestPrivate(const ImageBuilderRequest::Action action,
                                   CreateContainerRecipeRequest * const q);
    CreateContainerRecipeRequestPrivate(const CreateContainerRecipeRequestPrivate &other,
                                   CreateContainerRecipeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateContainerRecipeRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
