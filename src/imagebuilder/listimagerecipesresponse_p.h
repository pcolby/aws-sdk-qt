// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIMAGERECIPESRESPONSE_P_H
#define QTAWS_LISTIMAGERECIPESRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class ListImageRecipesResponse;

class ListImageRecipesResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit ListImageRecipesResponsePrivate(ListImageRecipesResponse * const q);

    void parseListImageRecipesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListImageRecipesResponse)
    Q_DISABLE_COPY(ListImageRecipesResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
