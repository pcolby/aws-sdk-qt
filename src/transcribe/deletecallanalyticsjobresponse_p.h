// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECALLANALYTICSJOBRESPONSE_P_H
#define QTAWS_DELETECALLANALYTICSJOBRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class DeleteCallAnalyticsJobResponse;

class DeleteCallAnalyticsJobResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit DeleteCallAnalyticsJobResponsePrivate(DeleteCallAnalyticsJobResponse * const q);

    void parseDeleteCallAnalyticsJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCallAnalyticsJobResponse)
    Q_DISABLE_COPY(DeleteCallAnalyticsJobResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
