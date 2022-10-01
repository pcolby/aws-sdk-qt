// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICEJOBRESPONSE_H
#define QTAWS_DESCRIBEDEVICEJOBRESPONSE_H

#include "panoramaresponse.h"
#include "describedevicejobrequest.h"

namespace QtAws {
namespace Panorama {

class DescribeDeviceJobResponsePrivate;

class QTAWSPANORAMA_EXPORT DescribeDeviceJobResponse : public PanoramaResponse {
    Q_OBJECT

public:
    DescribeDeviceJobResponse(const DescribeDeviceJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDeviceJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDeviceJobResponse)
    Q_DISABLE_COPY(DescribeDeviceJobResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
