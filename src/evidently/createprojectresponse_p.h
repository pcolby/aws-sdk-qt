// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROJECTRESPONSE_P_H
#define QTAWS_CREATEPROJECTRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class CreateProjectResponse;

class CreateProjectResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit CreateProjectResponsePrivate(CreateProjectResponse * const q);

    void parseCreateProjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProjectResponse)
    Q_DISABLE_COPY(CreateProjectResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
