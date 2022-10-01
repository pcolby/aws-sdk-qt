// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECIPERESPONSE_P_H
#define QTAWS_UPDATERECIPERESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class UpdateRecipeResponse;

class UpdateRecipeResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit UpdateRecipeResponsePrivate(UpdateRecipeResponse * const q);

    void parseUpdateRecipeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRecipeResponse)
    Q_DISABLE_COPY(UpdateRecipeResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
