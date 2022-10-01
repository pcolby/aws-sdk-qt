// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTANOMALYDETECTORRESPONSE_P_H
#define QTAWS_PUTANOMALYDETECTORRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class PutAnomalyDetectorResponse;

class PutAnomalyDetectorResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit PutAnomalyDetectorResponsePrivate(PutAnomalyDetectorResponse * const q);

    void parsePutAnomalyDetectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAnomalyDetectorResponse)
    Q_DISABLE_COPY(PutAnomalyDetectorResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
