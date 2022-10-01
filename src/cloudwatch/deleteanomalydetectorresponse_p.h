// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEANOMALYDETECTORRESPONSE_P_H
#define QTAWS_DELETEANOMALYDETECTORRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class DeleteAnomalyDetectorResponse;

class DeleteAnomalyDetectorResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit DeleteAnomalyDetectorResponsePrivate(DeleteAnomalyDetectorResponse * const q);

    void parseDeleteAnomalyDetectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAnomalyDetectorResponse)
    Q_DISABLE_COPY(DeleteAnomalyDetectorResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
