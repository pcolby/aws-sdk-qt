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

#ifndef QTAWS_SYNTHETICSCLIENT_H
#define QTAWS_SYNTHETICSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawssyntheticsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Synthetics {

class SyntheticsClientPrivate;
class CreateCanaryRequest;
class CreateCanaryResponse;
class DeleteCanaryRequest;
class DeleteCanaryResponse;
class DescribeCanariesRequest;
class DescribeCanariesResponse;
class DescribeCanariesLastRunRequest;
class DescribeCanariesLastRunResponse;
class DescribeRuntimeVersionsRequest;
class DescribeRuntimeVersionsResponse;
class GetCanaryRequest;
class GetCanaryResponse;
class GetCanaryRunsRequest;
class GetCanaryRunsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class StartCanaryRequest;
class StartCanaryResponse;
class StopCanaryRequest;
class StopCanaryResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateCanaryRequest;
class UpdateCanaryResponse;

class QTAWSSYNTHETICS_EXPORT SyntheticsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SyntheticsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit SyntheticsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateCanaryResponse * createCanary(const CreateCanaryRequest &request);
    DeleteCanaryResponse * deleteCanary(const DeleteCanaryRequest &request);
    DescribeCanariesResponse * describeCanaries(const DescribeCanariesRequest &request);
    DescribeCanariesLastRunResponse * describeCanariesLastRun(const DescribeCanariesLastRunRequest &request);
    DescribeRuntimeVersionsResponse * describeRuntimeVersions(const DescribeRuntimeVersionsRequest &request);
    GetCanaryResponse * getCanary(const GetCanaryRequest &request);
    GetCanaryRunsResponse * getCanaryRuns(const GetCanaryRunsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartCanaryResponse * startCanary(const StartCanaryRequest &request);
    StopCanaryResponse * stopCanary(const StopCanaryRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateCanaryResponse * updateCanary(const UpdateCanaryRequest &request);

protected:
    /// @cond internal
    SyntheticsClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit SyntheticsClient(SyntheticsClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(SyntheticsClient)
    Q_DISABLE_COPY(SyntheticsClient)

};

} // namespace Synthetics
} // namespace QtAws

#endif
