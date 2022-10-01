// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCELERATORRESPONSE_H
#define QTAWS_DESCRIBEACCELERATORRESPONSE_H

#include "globalacceleratorresponse.h"
#include "describeacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeAcceleratorResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DescribeAcceleratorResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    DescribeAcceleratorResponse(const DescribeAcceleratorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAcceleratorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAcceleratorResponse)
    Q_DISABLE_COPY(DescribeAcceleratorResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
