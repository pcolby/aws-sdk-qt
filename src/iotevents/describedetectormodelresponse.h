// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDETECTORMODELRESPONSE_H
#define QTAWS_DESCRIBEDETECTORMODELRESPONSE_H

#include "ioteventsresponse.h"
#include "describedetectormodelrequest.h"

namespace QtAws {
namespace IoTEvents {

class DescribeDetectorModelResponsePrivate;

class QTAWSIOTEVENTS_EXPORT DescribeDetectorModelResponse : public IoTEventsResponse {
    Q_OBJECT

public:
    DescribeDetectorModelResponse(const DescribeDetectorModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDetectorModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDetectorModelResponse)
    Q_DISABLE_COPY(DescribeDetectorModelResponse)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
