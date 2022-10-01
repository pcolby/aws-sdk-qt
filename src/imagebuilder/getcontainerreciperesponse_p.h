// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERRECIPERESPONSE_P_H
#define QTAWS_GETCONTAINERRECIPERESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class GetContainerRecipeResponse;

class GetContainerRecipeResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit GetContainerRecipeResponsePrivate(GetContainerRecipeResponse * const q);

    void parseGetContainerRecipeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContainerRecipeResponse)
    Q_DISABLE_COPY(GetContainerRecipeResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
