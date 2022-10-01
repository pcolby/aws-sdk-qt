// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCALLANALYTICSJOBRESPONSE_H
#define QTAWS_GETCALLANALYTICSJOBRESPONSE_H

#include "transcriberesponse.h"
#include "getcallanalyticsjobrequest.h"

namespace QtAws {
namespace Transcribe {

class GetCallAnalyticsJobResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT GetCallAnalyticsJobResponse : public TranscribeResponse {
    Q_OBJECT

public:
    GetCallAnalyticsJobResponse(const GetCallAnalyticsJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCallAnalyticsJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCallAnalyticsJobResponse)
    Q_DISABLE_COPY(GetCallAnalyticsJobResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
