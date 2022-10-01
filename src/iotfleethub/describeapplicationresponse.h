// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONRESPONSE_H
#define QTAWS_DESCRIBEAPPLICATIONRESPONSE_H

#include "iotfleethubresponse.h"
#include "describeapplicationrequest.h"

namespace QtAws {
namespace IoTFleetHub {

class DescribeApplicationResponsePrivate;

class QTAWSIOTFLEETHUB_EXPORT DescribeApplicationResponse : public IoTFleetHubResponse {
    Q_OBJECT

public:
    DescribeApplicationResponse(const DescribeApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicationResponse)
    Q_DISABLE_COPY(DescribeApplicationResponse)

};

} // namespace IoTFleetHub
} // namespace QtAws

#endif
