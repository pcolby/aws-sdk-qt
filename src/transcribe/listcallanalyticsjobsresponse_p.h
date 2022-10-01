// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCALLANALYTICSJOBSRESPONSE_P_H
#define QTAWS_LISTCALLANALYTICSJOBSRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class ListCallAnalyticsJobsResponse;

class ListCallAnalyticsJobsResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit ListCallAnalyticsJobsResponsePrivate(ListCallAnalyticsJobsResponse * const q);

    void parseListCallAnalyticsJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCallAnalyticsJobsResponse)
    Q_DISABLE_COPY(ListCallAnalyticsJobsResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
