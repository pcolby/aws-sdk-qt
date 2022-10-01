// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGGINGOPTIONSRESPONSE_H
#define QTAWS_DESCRIBELOGGINGOPTIONSRESPONSE_H

#include "iotsitewiseresponse.h"
#include "describeloggingoptionsrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeLoggingOptionsResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeLoggingOptionsResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DescribeLoggingOptionsResponse(const DescribeLoggingOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLoggingOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoggingOptionsResponse)
    Q_DISABLE_COPY(DescribeLoggingOptionsResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
