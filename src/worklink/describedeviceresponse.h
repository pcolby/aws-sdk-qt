// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICERESPONSE_H
#define QTAWS_DESCRIBEDEVICERESPONSE_H

#include "worklinkresponse.h"
#include "describedevicerequest.h"

namespace QtAws {
namespace WorkLink {

class DescribeDeviceResponsePrivate;

class QTAWSWORKLINK_EXPORT DescribeDeviceResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    DescribeDeviceResponse(const DescribeDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDeviceResponse)
    Q_DISABLE_COPY(DescribeDeviceResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
