// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROJECTRESPONSE_P_H
#define QTAWS_GETPROJECTRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class GetProjectResponse;

class GetProjectResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit GetProjectResponsePrivate(GetProjectResponse * const q);

    void parseGetProjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetProjectResponse)
    Q_DISABLE_COPY(GetProjectResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
