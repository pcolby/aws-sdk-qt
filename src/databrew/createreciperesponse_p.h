// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECIPERESPONSE_P_H
#define QTAWS_CREATERECIPERESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class CreateRecipeResponse;

class CreateRecipeResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit CreateRecipeResponsePrivate(CreateRecipeResponse * const q);

    void parseCreateRecipeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRecipeResponse)
    Q_DISABLE_COPY(CreateRecipeResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
