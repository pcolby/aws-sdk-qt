// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCALLANALYTICSJOBRESPONSE_P_H
#define QTAWS_GETCALLANALYTICSJOBRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class GetCallAnalyticsJobResponse;

class GetCallAnalyticsJobResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit GetCallAnalyticsJobResponsePrivate(GetCallAnalyticsJobResponse * const q);

    void parseGetCallAnalyticsJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCallAnalyticsJobResponse)
    Q_DISABLE_COPY(GetCallAnalyticsJobResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
