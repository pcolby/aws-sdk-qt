// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTRESPONSE_H
#define QTAWS_DESCRIBEENDPOINTRESPONSE_H

#include "comprehendresponse.h"
#include "describeendpointrequest.h"

namespace QtAws {
namespace Comprehend {

class DescribeEndpointResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DescribeEndpointResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DescribeEndpointResponse(const DescribeEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEndpointResponse)
    Q_DISABLE_COPY(DescribeEndpointResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
