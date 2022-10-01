// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFEEDBACKRESPONSE_H
#define QTAWS_PUTFEEDBACKRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "putfeedbackrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class PutFeedbackResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT PutFeedbackResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    PutFeedbackResponse(const PutFeedbackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutFeedbackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutFeedbackResponse)
    Q_DISABLE_COPY(PutFeedbackResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
