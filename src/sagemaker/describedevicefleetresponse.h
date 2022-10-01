// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICEFLEETRESPONSE_H
#define QTAWS_DESCRIBEDEVICEFLEETRESPONSE_H

#include "sagemakerresponse.h"
#include "describedevicefleetrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeDeviceFleetResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeDeviceFleetResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeDeviceFleetResponse(const DescribeDeviceFleetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDeviceFleetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDeviceFleetResponse)
    Q_DISABLE_COPY(DescribeDeviceFleetResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
