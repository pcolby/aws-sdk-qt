// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECIPEVERSIONSRESPONSE_P_H
#define QTAWS_LISTRECIPEVERSIONSRESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class ListRecipeVersionsResponse;

class ListRecipeVersionsResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit ListRecipeVersionsResponsePrivate(ListRecipeVersionsResponse * const q);

    void parseListRecipeVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRecipeVersionsResponse)
    Q_DISABLE_COPY(ListRecipeVersionsResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
