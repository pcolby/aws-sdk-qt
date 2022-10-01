// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGERECIPERESPONSE_P_H
#define QTAWS_CREATEIMAGERECIPERESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class CreateImageRecipeResponse;

class CreateImageRecipeResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit CreateImageRecipeResponsePrivate(CreateImageRecipeResponse * const q);

    void parseCreateImageRecipeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateImageRecipeResponse)
    Q_DISABLE_COPY(CreateImageRecipeResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
