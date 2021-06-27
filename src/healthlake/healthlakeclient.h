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

#ifndef QTAWS_HEALTHLAKECLIENT_H
#define QTAWS_HEALTHLAKECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace HealthLake {

class HealthLakeClientPrivate;
class CreateFHIRDatastoreRequest;
class CreateFHIRDatastoreResponse;
class DeleteFHIRDatastoreRequest;
class DeleteFHIRDatastoreResponse;
class DescribeFHIRDatastoreRequest;
class DescribeFHIRDatastoreResponse;
class DescribeFHIRExportJobRequest;
class DescribeFHIRExportJobResponse;
class DescribeFHIRImportJobRequest;
class DescribeFHIRImportJobResponse;
class ListFHIRDatastoresRequest;
class ListFHIRDatastoresResponse;
class StartFHIRExportJobRequest;
class StartFHIRExportJobResponse;
class StartFHIRImportJobRequest;
class StartFHIRImportJobResponse;

class QTAWS_EXPORT HealthLakeClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    HealthLakeClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    HealthLakeClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateFHIRDatastoreResponse * createFHIRDatastore(const CreateFHIRDatastoreRequest &request);
    DeleteFHIRDatastoreResponse * deleteFHIRDatastore(const DeleteFHIRDatastoreRequest &request);
    DescribeFHIRDatastoreResponse * describeFHIRDatastore(const DescribeFHIRDatastoreRequest &request);
    DescribeFHIRExportJobResponse * describeFHIRExportJob(const DescribeFHIRExportJobRequest &request);
    DescribeFHIRImportJobResponse * describeFHIRImportJob(const DescribeFHIRImportJobRequest &request);
    ListFHIRDatastoresResponse * listFHIRDatastores(const ListFHIRDatastoresRequest &request);
    StartFHIRExportJobResponse * startFHIRExportJob(const StartFHIRExportJobRequest &request);
    StartFHIRImportJobResponse * startFHIRImportJob(const StartFHIRImportJobRequest &request);

protected:
    /// @cond internal
    HealthLakeClientPrivate * const d_ptr; ///< Internal d-pointer.
    HealthLakeClient(HealthLakeClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(HealthLakeClient)
    Q_DISABLE_COPY(HealthLakeClient)

};

} // namespace HealthLake
} // namespace QtAws

#endif
