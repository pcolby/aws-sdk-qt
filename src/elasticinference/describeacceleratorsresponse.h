// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCELERATORSRESPONSE_H
#define QTAWS_DESCRIBEACCELERATORSRESPONSE_H

#include "elasticinferenceresponse.h"
#include "describeacceleratorsrequest.h"

namespace QtAws {
namespace ElasticInference {

class DescribeAcceleratorsResponsePrivate;

class QTAWSELASTICINFERENCE_EXPORT DescribeAcceleratorsResponse : public ElasticInferenceResponse {
    Q_OBJECT

public:
    DescribeAcceleratorsResponse(const DescribeAcceleratorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAcceleratorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAcceleratorsResponse)
    Q_DISABLE_COPY(DescribeAcceleratorsResponse)

};

} // namespace ElasticInference
} // namespace QtAws

#endif
