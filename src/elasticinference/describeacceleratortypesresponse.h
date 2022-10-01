// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCELERATORTYPESRESPONSE_H
#define QTAWS_DESCRIBEACCELERATORTYPESRESPONSE_H

#include "elasticinferenceresponse.h"
#include "describeacceleratortypesrequest.h"

namespace QtAws {
namespace ElasticInference {

class DescribeAcceleratorTypesResponsePrivate;

class QTAWSELASTICINFERENCE_EXPORT DescribeAcceleratorTypesResponse : public ElasticInferenceResponse {
    Q_OBJECT

public:
    DescribeAcceleratorTypesResponse(const DescribeAcceleratorTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAcceleratorTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAcceleratorTypesResponse)
    Q_DISABLE_COPY(DescribeAcceleratorTypesResponse)

};

} // namespace ElasticInference
} // namespace QtAws

#endif
