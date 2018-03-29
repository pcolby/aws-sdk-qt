/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_IMPORTEXPORTCLIENT_H
#define QTAWS_IMPORTEXPORTCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace ImportExport {

class ImportExportClientPrivate;
class CancelJobRequest;
class CancelJobResponse;
class CreateJobRequest;
class CreateJobResponse;
class GetShippingLabelRequest;
class GetShippingLabelResponse;
class GetStatusRequest;
class GetStatusResponse;
class ListJobsRequest;
class ListJobsResponse;
class UpdateJobRequest;
class UpdateJobResponse;

class QTAWS_EXPORT ImportExportClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ImportExportClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ImportExportClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelJobResponse * cancelJob(const CancelJobRequest &request);
    CreateJobResponse * createJob(const CreateJobRequest &request);
    GetShippingLabelResponse * getShippingLabel(const GetShippingLabelRequest &request);
    GetStatusResponse * getStatus(const GetStatusRequest &request);
    ListJobsResponse * listJobs(const ListJobsRequest &request);
    UpdateJobResponse * updateJob(const UpdateJobRequest &request);

private:
    Q_DECLARE_PRIVATE(ImportExportClient)
    Q_DISABLE_COPY(ImportExportClient)

};

} // namespace ImportExport
} // namespace QtAws

#endif
