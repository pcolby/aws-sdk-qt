// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCELERATOROFFERINGSREQUEST_H
#define QTAWS_DESCRIBEACCELERATOROFFERINGSREQUEST_H

#include "elasticinferencerequest.h"

namespace QtAws {
namespace ElasticInference {

class DescribeAcceleratorOfferingsRequestPrivate;

class QTAWSELASTICINFERENCE_EXPORT DescribeAcceleratorOfferingsRequest : public ElasticInferenceRequest {

public:
    DescribeAcceleratorOfferingsRequest(const DescribeAcceleratorOfferingsRequest &other);
    DescribeAcceleratorOfferingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAcceleratorOfferingsRequest)

};

} // namespace ElasticInference
} // namespace QtAws

#endif
