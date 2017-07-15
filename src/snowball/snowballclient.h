/*
    Copyright 2013-2016 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SNOWBALLCLIENT_H
#define QTAWS_SNOWBALLCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace Snowball {

class SnowballClientPrivate;

class QTAWS_EXPORT SnowballClient : public AwsAbstractClient {
    Q_OBJECT

public:
    SnowballClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SnowballClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelJobResponse * cancelJob(const CancelJobRequest &request);
    CreateAddressResponse * createAddress(const CreateAddressRequest &request);
    CreateJobResponse * createJob(const CreateJobRequest &request);
    DescribeAddressResponse * describeAddress(const DescribeAddressRequest &request);
    DescribeAddressesResponse * describeAddresses(const DescribeAddressesRequest &request);
    DescribeJobResponse * describeJob(const DescribeJobRequest &request);
    GetJobManifestResponse * getJobManifest(const GetJobManifestRequest &request);
    GetJobUnlockCodeResponse * getJobUnlockCode(const GetJobUnlockCodeRequest &request);
    GetSnowballUsageResponse * getSnowballUsage(const GetSnowballUsageRequest &request);
    ListJobsResponse * listJobs(const ListJobsRequest &request);
    UpdateJobResponse * updateJob(const UpdateJobRequest &request);

private:
    Q_DECLARE_PRIVATE(SnowballClient)
    Q_DISABLE_COPY(SnowballClient)

};

} // namespace Snowball
} // namespace AWS

#endif
