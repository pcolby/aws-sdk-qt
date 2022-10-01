// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDETECTORMODELANALYSISRESPONSE_H
#define QTAWS_DESCRIBEDETECTORMODELANALYSISRESPONSE_H

#include "ioteventsresponse.h"
#include "describedetectormodelanalysisrequest.h"

namespace QtAws {
namespace IoTEvents {

class DescribeDetectorModelAnalysisResponsePrivate;

class QTAWSIOTEVENTS_EXPORT DescribeDetectorModelAnalysisResponse : public IoTEventsResponse {
    Q_OBJECT

public:
    DescribeDetectorModelAnalysisResponse(const DescribeDetectorModelAnalysisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDetectorModelAnalysisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDetectorModelAnalysisResponse)
    Q_DISABLE_COPY(DescribeDetectorModelAnalysisResponse)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
