// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTCONFIGRESPONSE_H
#define QTAWS_DESCRIBEENDPOINTCONFIGRESPONSE_H

#include "sagemakerresponse.h"
#include "describeendpointconfigrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeEndpointConfigResponsePrivate;

class QTAWSSAGEMAKER_EXPORT DescribeEndpointConfigResponse : public SageMakerResponse {
    Q_OBJECT

public:
    DescribeEndpointConfigResponse(const DescribeEndpointConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEndpointConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEndpointConfigResponse)
    Q_DISABLE_COPY(DescribeEndpointConfigResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
