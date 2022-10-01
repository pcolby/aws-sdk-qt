// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECIPEVERSIONRESPONSE_P_H
#define QTAWS_DELETERECIPEVERSIONRESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class DeleteRecipeVersionResponse;

class DeleteRecipeVersionResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit DeleteRecipeVersionResponsePrivate(DeleteRecipeVersionResponse * const q);

    void parseDeleteRecipeVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRecipeVersionResponse)
    Q_DISABLE_COPY(DeleteRecipeVersionResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
