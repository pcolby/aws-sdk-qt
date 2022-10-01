// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFEEDBACKRESPONSE_H
#define QTAWS_GETFEEDBACKRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "getfeedbackrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class GetFeedbackResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT GetFeedbackResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    GetFeedbackResponse(const GetFeedbackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFeedbackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFeedbackResponse)
    Q_DISABLE_COPY(GetFeedbackResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
