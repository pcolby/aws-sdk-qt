/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
