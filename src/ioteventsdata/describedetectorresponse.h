// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDETECTORRESPONSE_H
#define QTAWS_DESCRIBEDETECTORRESPONSE_H

#include "ioteventsdataresponse.h"
#include "describedetectorrequest.h"

namespace QtAws {
namespace IoTEventsData {

class DescribeDetectorResponsePrivate;

class QTAWSIOTEVENTSDATA_EXPORT DescribeDetectorResponse : public IoTEventsDataResponse {
    Q_OBJECT

public:
    DescribeDetectorResponse(const DescribeDetectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDetectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDetectorResponse)
    Q_DISABLE_COPY(DescribeDetectorResponse)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
