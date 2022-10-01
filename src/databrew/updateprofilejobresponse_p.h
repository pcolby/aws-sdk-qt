// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROFILEJOBRESPONSE_P_H
#define QTAWS_UPDATEPROFILEJOBRESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class UpdateProfileJobResponse;

class UpdateProfileJobResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit UpdateProfileJobResponsePrivate(UpdateProfileJobResponse * const q);

    void parseUpdateProfileJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateProfileJobResponse)
    Q_DISABLE_COPY(UpdateProfileJobResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
