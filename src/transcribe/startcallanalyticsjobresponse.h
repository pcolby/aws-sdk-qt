// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCALLANALYTICSJOBRESPONSE_H
#define QTAWS_STARTCALLANALYTICSJOBRESPONSE_H

#include "transcriberesponse.h"
#include "startcallanalyticsjobrequest.h"

namespace QtAws {
namespace Transcribe {

class StartCallAnalyticsJobResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT StartCallAnalyticsJobResponse : public TranscribeResponse {
    Q_OBJECT

public:
    StartCallAnalyticsJobResponse(const StartCallAnalyticsJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartCallAnalyticsJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartCallAnalyticsJobResponse)
    Q_DISABLE_COPY(StartCallAnalyticsJobResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
