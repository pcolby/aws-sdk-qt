// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCELERATORATTRIBUTESRESPONSE_H
#define QTAWS_DESCRIBEACCELERATORATTRIBUTESRESPONSE_H

#include "globalacceleratorresponse.h"
#include "describeacceleratorattributesrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeAcceleratorAttributesResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DescribeAcceleratorAttributesResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    DescribeAcceleratorAttributesResponse(const DescribeAcceleratorAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAcceleratorAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAcceleratorAttributesResponse)
    Q_DISABLE_COPY(DescribeAcceleratorAttributesResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
