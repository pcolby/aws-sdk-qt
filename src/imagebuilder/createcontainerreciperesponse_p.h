// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTAINERRECIPERESPONSE_P_H
#define QTAWS_CREATECONTAINERRECIPERESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class CreateContainerRecipeResponse;

class CreateContainerRecipeResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit CreateContainerRecipeResponsePrivate(CreateContainerRecipeResponse * const q);

    void parseCreateContainerRecipeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateContainerRecipeResponse)
    Q_DISABLE_COPY(CreateContainerRecipeResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
