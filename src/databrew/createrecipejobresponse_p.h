// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERECIPEJOBRESPONSE_P_H
#define QTAWS_CREATERECIPEJOBRESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class CreateRecipeJobResponse;

class CreateRecipeJobResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit CreateRecipeJobResponsePrivate(CreateRecipeJobResponse * const q);

    void parseCreateRecipeJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRecipeJobResponse)
    Q_DISABLE_COPY(CreateRecipeJobResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
