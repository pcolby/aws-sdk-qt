// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPAPPLICATIONRESPONSE_P_H
#define QTAWS_STOPAPPLICATIONRESPONSE_P_H

#include "emrserverlessresponse_p.h"

namespace QtAws {
namespace EmrServerless {

class StopApplicationResponse;

class StopApplicationResponsePrivate : public EmrServerlessResponsePrivate {

public:

    explicit StopApplicationResponsePrivate(StopApplicationResponse * const q);

    void parseStopApplicationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StopApplicationResponse)
    Q_DISABLE_COPY(StopApplicationResponsePrivate)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
