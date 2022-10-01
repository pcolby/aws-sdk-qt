// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTOPICSDETECTIONJOBRESPONSE_P_H
#define QTAWS_STARTTOPICSDETECTIONJOBRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class StartTopicsDetectionJobResponse;

class StartTopicsDetectionJobResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit StartTopicsDetectionJobResponsePrivate(StartTopicsDetectionJobResponse * const q);

    void parseStartTopicsDetectionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartTopicsDetectionJobResponse)
    Q_DISABLE_COPY(StartTopicsDetectionJobResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
