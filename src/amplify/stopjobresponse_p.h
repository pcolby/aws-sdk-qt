// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPJOBRESPONSE_P_H
#define QTAWS_STOPJOBRESPONSE_P_H

#include "amplifyresponse_p.h"

namespace QtAws {
namespace Amplify {

class StopJobResponse;

class StopJobResponsePrivate : public AmplifyResponsePrivate {

public:

    explicit StopJobResponsePrivate(StopJobResponse * const q);

    void parseStopJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopJobResponse)
    Q_DISABLE_COPY(StopJobResponsePrivate)

};

} // namespace Amplify
} // namespace QtAws

#endif
