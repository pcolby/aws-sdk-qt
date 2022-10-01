// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHRECIPERESPONSE_P_H
#define QTAWS_PUBLISHRECIPERESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class PublishRecipeResponse;

class PublishRecipeResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit PublishRecipeResponsePrivate(PublishRecipeResponse * const q);

    void parsePublishRecipeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PublishRecipeResponse)
    Q_DISABLE_COPY(PublishRecipeResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
