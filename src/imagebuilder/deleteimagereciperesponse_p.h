// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIMAGERECIPERESPONSE_P_H
#define QTAWS_DELETEIMAGERECIPERESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteImageRecipeResponse;

class DeleteImageRecipeResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit DeleteImageRecipeResponsePrivate(DeleteImageRecipeResponse * const q);

    void parseDeleteImageRecipeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteImageRecipeResponse)
    Q_DISABLE_COPY(DeleteImageRecipeResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
