// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICINFERENCECLIENT_H
#define QTAWS_ELASTICINFERENCECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawselasticinferenceglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ElasticInference {

class ElasticInferenceClientPrivate;
class DescribeAcceleratorOfferingsRequest;
class DescribeAcceleratorOfferingsResponse;
class DescribeAcceleratorTypesRequest;
class DescribeAcceleratorTypesResponse;
class DescribeAcceleratorsRequest;
class DescribeAcceleratorsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

class QTAWSELASTICINFERENCE_EXPORT ElasticInferenceClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ElasticInferenceClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ElasticInferenceClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DescribeAcceleratorOfferingsResponse * describeAcceleratorOfferings(const DescribeAcceleratorOfferingsRequest &request);
    DescribeAcceleratorTypesResponse * describeAcceleratorTypes(const DescribeAcceleratorTypesRequest &request);
    DescribeAcceleratorsResponse * describeAccelerators(const DescribeAcceleratorsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(ElasticInferenceClient)
    Q_DISABLE_COPY(ElasticInferenceClient)

};

} // namespace ElasticInference
} // namespace QtAws

#endif
