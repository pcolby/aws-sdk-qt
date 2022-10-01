// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCELERATORTYPESREQUEST_H
#define QTAWS_DESCRIBEACCELERATORTYPESREQUEST_H

#include "elasticinferencerequest.h"

namespace QtAws {
namespace ElasticInference {

class DescribeAcceleratorTypesRequestPrivate;

class QTAWSELASTICINFERENCE_EXPORT DescribeAcceleratorTypesRequest : public ElasticInferenceRequest {

public:
    DescribeAcceleratorTypesRequest(const DescribeAcceleratorTypesRequest &other);
    DescribeAcceleratorTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAcceleratorTypesRequest)

};

} // namespace ElasticInference
} // namespace QtAws

#endif
