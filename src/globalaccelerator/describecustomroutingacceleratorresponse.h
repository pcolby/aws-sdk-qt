// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMROUTINGACCELERATORRESPONSE_H
#define QTAWS_DESCRIBECUSTOMROUTINGACCELERATORRESPONSE_H

#include "globalacceleratorresponse.h"
#include "describecustomroutingacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeCustomRoutingAcceleratorResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DescribeCustomRoutingAcceleratorResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    DescribeCustomRoutingAcceleratorResponse(const DescribeCustomRoutingAcceleratorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCustomRoutingAcceleratorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomRoutingAcceleratorResponse)
    Q_DISABLE_COPY(DescribeCustomRoutingAcceleratorResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
