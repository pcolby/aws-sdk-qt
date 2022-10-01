// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCELERATORSREQUEST_H
#define QTAWS_DESCRIBEACCELERATORSREQUEST_H

#include "elasticinferencerequest.h"

namespace QtAws {
namespace ElasticInference {

class DescribeAcceleratorsRequestPrivate;

class QTAWSELASTICINFERENCE_EXPORT DescribeAcceleratorsRequest : public ElasticInferenceRequest {

public:
    DescribeAcceleratorsRequest(const DescribeAcceleratorsRequest &other);
    DescribeAcceleratorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAcceleratorsRequest)

};

} // namespace ElasticInference
} // namespace QtAws

#endif
