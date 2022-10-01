// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTAINERRECIPESRESPONSE_P_H
#define QTAWS_LISTCONTAINERRECIPESRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class ListContainerRecipesResponse;

class ListContainerRecipesResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit ListContainerRecipesResponsePrivate(ListContainerRecipesResponse * const q);

    void parseListContainerRecipesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListContainerRecipesResponse)
    Q_DISABLE_COPY(ListContainerRecipesResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
