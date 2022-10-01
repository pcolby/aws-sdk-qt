// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTAINERRECIPERESPONSE_P_H
#define QTAWS_DELETECONTAINERRECIPERESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class DeleteContainerRecipeResponse;

class DeleteContainerRecipeResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit DeleteContainerRecipeResponsePrivate(DeleteContainerRecipeResponse * const q);

    void parseDeleteContainerRecipeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteContainerRecipeResponse)
    Q_DISABLE_COPY(DeleteContainerRecipeResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
