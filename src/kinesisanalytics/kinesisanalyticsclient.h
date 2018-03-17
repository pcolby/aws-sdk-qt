/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_KINESISANALYTICSCLIENT_H
#define QTAWS_KINESISANALYTICSCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace KinesisAnalytics {

class KinesisAnalyticsClientPrivate;

class QTAWS_EXPORT KinesisAnalyticsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    KinesisAnalyticsClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    KinesisAnalyticsClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddApplicationInputResponse * addApplicationInput(const AddApplicationInputRequest &request);
    AddApplicationOutputResponse * addApplicationOutput(const AddApplicationOutputRequest &request);
    AddApplicationReferenceDataSourceResponse * addApplicationReferenceDataSource(const AddApplicationReferenceDataSourceRequest &request);
    CreateApplicationResponse * createApplication(const CreateApplicationRequest &request);
    DeleteApplicationResponse * deleteApplication(const DeleteApplicationRequest &request);
    DeleteApplicationOutputResponse * deleteApplicationOutput(const DeleteApplicationOutputRequest &request);
    DeleteApplicationReferenceDataSourceResponse * deleteApplicationReferenceDataSource(const DeleteApplicationReferenceDataSourceRequest &request);
    DescribeApplicationResponse * describeApplication(const DescribeApplicationRequest &request);
    DiscoverInputSchemaResponse * discoverInputSchema(const DiscoverInputSchemaRequest &request);
    ListApplicationsResponse * listApplications(const ListApplicationsRequest &request);
    StartApplicationResponse * startApplication(const StartApplicationRequest &request);
    StopApplicationResponse * stopApplication(const StopApplicationRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);

private:
    Q_DECLARE_PRIVATE(KinesisAnalyticsClient)
    Q_DISABLE_COPY(KinesisAnalyticsClient)

};

} // namespace KinesisAnalytics
} // namespace AWS

#endif
