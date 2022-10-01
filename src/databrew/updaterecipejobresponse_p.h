// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECIPEJOBRESPONSE_P_H
#define QTAWS_UPDATERECIPEJOBRESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class UpdateRecipeJobResponse;

class UpdateRecipeJobResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit UpdateRecipeJobResponsePrivate(UpdateRecipeJobResponse * const q);

    void parseUpdateRecipeJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRecipeJobResponse)
    Q_DISABLE_COPY(UpdateRecipeJobResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
