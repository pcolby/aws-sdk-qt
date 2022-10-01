// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORIGINENDPOINTRESPONSE_H
#define QTAWS_DESCRIBEORIGINENDPOINTRESPONSE_H

#include "mediapackageresponse.h"
#include "describeoriginendpointrequest.h"

namespace QtAws {
namespace MediaPackage {

class DescribeOriginEndpointResponsePrivate;

class QTAWSMEDIAPACKAGE_EXPORT DescribeOriginEndpointResponse : public MediaPackageResponse {
    Q_OBJECT

public:
    DescribeOriginEndpointResponse(const DescribeOriginEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOriginEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOriginEndpointResponse)
    Q_DISABLE_COPY(DescribeOriginEndpointResponse)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
