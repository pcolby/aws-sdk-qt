// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROJECTRESPONSE_P_H
#define QTAWS_UPDATEPROJECTRESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class UpdateProjectResponse;

class UpdateProjectResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit UpdateProjectResponsePrivate(UpdateProjectResponse * const q);

    void parseUpdateProjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateProjectResponse)
    Q_DISABLE_COPY(UpdateProjectResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
