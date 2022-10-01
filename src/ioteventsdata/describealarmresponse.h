// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALARMRESPONSE_H
#define QTAWS_DESCRIBEALARMRESPONSE_H

#include "ioteventsdataresponse.h"
#include "describealarmrequest.h"

namespace QtAws {
namespace IoTEventsData {

class DescribeAlarmResponsePrivate;

class QTAWSIOTEVENTSDATA_EXPORT DescribeAlarmResponse : public IoTEventsDataResponse {
    Q_OBJECT

public:
    DescribeAlarmResponse(const DescribeAlarmRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAlarmRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAlarmResponse)
    Q_DISABLE_COPY(DescribeAlarmResponse)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
