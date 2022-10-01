// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPROJECTSESSIONRESPONSE_P_H
#define QTAWS_STARTPROJECTSESSIONRESPONSE_P_H

#include "databrewresponse_p.h"

namespace QtAws {
namespace DataBrew {

class StartProjectSessionResponse;

class StartProjectSessionResponsePrivate : public DataBrewResponsePrivate {

public:

    explicit StartProjectSessionResponsePrivate(StartProjectSessionResponse * const q);

    void parseStartProjectSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartProjectSessionResponse)
    Q_DISABLE_COPY(StartProjectSessionResponsePrivate)

};

} // namespace DataBrew
} // namespace QtAws

#endif
