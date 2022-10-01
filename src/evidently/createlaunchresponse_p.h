// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELAUNCHRESPONSE_P_H
#define QTAWS_CREATELAUNCHRESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class CreateLaunchResponse;

class CreateLaunchResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit CreateLaunchResponsePrivate(CreateLaunchResponse * const q);

    void parseCreateLaunchResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLaunchResponse)
    Q_DISABLE_COPY(CreateLaunchResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
