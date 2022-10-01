// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMROUTINGACCELERATORATTRIBUTESRESPONSE_H
#define QTAWS_DESCRIBECUSTOMROUTINGACCELERATORATTRIBUTESRESPONSE_H

#include "globalacceleratorresponse.h"
#include "describecustomroutingacceleratorattributesrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeCustomRoutingAcceleratorAttributesResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DescribeCustomRoutingAcceleratorAttributesResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    DescribeCustomRoutingAcceleratorAttributesResponse(const DescribeCustomRoutingAcceleratorAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCustomRoutingAcceleratorAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomRoutingAcceleratorAttributesResponse)
    Q_DISABLE_COPY(DescribeCustomRoutingAcceleratorAttributesResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
