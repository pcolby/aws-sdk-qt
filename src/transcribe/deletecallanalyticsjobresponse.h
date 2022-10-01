// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECALLANALYTICSJOBRESPONSE_H
#define QTAWS_DELETECALLANALYTICSJOBRESPONSE_H

#include "transcriberesponse.h"
#include "deletecallanalyticsjobrequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteCallAnalyticsJobResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT DeleteCallAnalyticsJobResponse : public TranscribeResponse {
    Q_OBJECT

public:
    DeleteCallAnalyticsJobResponse(const DeleteCallAnalyticsJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCallAnalyticsJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCallAnalyticsJobResponse)
    Q_DISABLE_COPY(DeleteCallAnalyticsJobResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
