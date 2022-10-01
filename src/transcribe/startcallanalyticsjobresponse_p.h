// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCALLANALYTICSJOBRESPONSE_P_H
#define QTAWS_STARTCALLANALYTICSJOBRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class StartCallAnalyticsJobResponse;

class StartCallAnalyticsJobResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit StartCallAnalyticsJobResponsePrivate(StartCallAnalyticsJobResponse * const q);

    void parseStartCallAnalyticsJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartCallAnalyticsJobResponse)
    Q_DISABLE_COPY(StartCallAnalyticsJobResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
