// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIMAGERECIPERESPONSE_P_H
#define QTAWS_GETIMAGERECIPERESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class GetImageRecipeResponse;

class GetImageRecipeResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit GetImageRecipeResponsePrivate(GetImageRecipeResponse * const q);

    void parseGetImageRecipeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetImageRecipeResponse)
    Q_DISABLE_COPY(GetImageRecipeResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
