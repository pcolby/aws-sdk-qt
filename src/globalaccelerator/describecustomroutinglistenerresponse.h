// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMROUTINGLISTENERRESPONSE_H
#define QTAWS_DESCRIBECUSTOMROUTINGLISTENERRESPONSE_H

#include "globalacceleratorresponse.h"
#include "describecustomroutinglistenerrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DescribeCustomRoutingListenerResponsePrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DescribeCustomRoutingListenerResponse : public GlobalAcceleratorResponse {
    Q_OBJECT

public:
    DescribeCustomRoutingListenerResponse(const DescribeCustomRoutingListenerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCustomRoutingListenerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCustomRoutingListenerResponse)
    Q_DISABLE_COPY(DescribeCustomRoutingListenerResponse)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
