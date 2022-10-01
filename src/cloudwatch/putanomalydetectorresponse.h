// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTANOMALYDETECTORRESPONSE_H
#define QTAWS_PUTANOMALYDETECTORRESPONSE_H

#include "cloudwatchresponse.h"
#include "putanomalydetectorrequest.h"

namespace QtAws {
namespace CloudWatch {

class PutAnomalyDetectorResponsePrivate;

class QTAWSCLOUDWATCH_EXPORT PutAnomalyDetectorResponse : public CloudWatchResponse {
    Q_OBJECT

public:
    PutAnomalyDetectorResponse(const PutAnomalyDetectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAnomalyDetectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAnomalyDetectorResponse)
    Q_DISABLE_COPY(PutAnomalyDetectorResponse)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
