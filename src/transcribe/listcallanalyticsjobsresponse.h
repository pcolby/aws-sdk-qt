// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCALLANALYTICSJOBSRESPONSE_H
#define QTAWS_LISTCALLANALYTICSJOBSRESPONSE_H

#include "transcriberesponse.h"
#include "listcallanalyticsjobsrequest.h"

namespace QtAws {
namespace Transcribe {

class ListCallAnalyticsJobsResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT ListCallAnalyticsJobsResponse : public TranscribeResponse {
    Q_OBJECT

public:
    ListCallAnalyticsJobsResponse(const ListCallAnalyticsJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListCallAnalyticsJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCallAnalyticsJobsResponse)
    Q_DISABLE_COPY(ListCallAnalyticsJobsResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
