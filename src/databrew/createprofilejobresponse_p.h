// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROFILEJOBRESPONSE_P_H
#define QTAWS_CREATEPROFILEJOBRESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class CreateProfileJobResponse;

class CreateProfileJobResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit CreateProfileJobResponsePrivate(CreateProfileJobResponse * const q);

    void parseCreateProfileJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProfileJobResponse)
    Q_DISABLE_COPY(CreateProfileJobResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
