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

#ifndef QTAWS_ACMCLIENT_H
#define QTAWS_ACMCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace ACM {

class AcmClientPrivate;
class AddTagsToCertificateRequest;
class AddTagsToCertificateResponse;
class DeleteCertificateRequest;
class DeleteCertificateResponse;
class DescribeCertificateRequest;
class DescribeCertificateResponse;
class ExportCertificateRequest;
class ExportCertificateResponse;
class GetAccountConfigurationRequest;
class GetAccountConfigurationResponse;
class GetCertificateRequest;
class GetCertificateResponse;
class ImportCertificateRequest;
class ImportCertificateResponse;
class ListCertificatesRequest;
class ListCertificatesResponse;
class ListTagsForCertificateRequest;
class ListTagsForCertificateResponse;
class PutAccountConfigurationRequest;
class PutAccountConfigurationResponse;
class RemoveTagsFromCertificateRequest;
class RemoveTagsFromCertificateResponse;
class RenewCertificateRequest;
class RenewCertificateResponse;
class RequestCertificateRequest;
class RequestCertificateResponse;
class ResendValidationEmailRequest;
class ResendValidationEmailResponse;
class UpdateCertificateOptionsRequest;
class UpdateCertificateOptionsResponse;

class QTAWS_EXPORT AcmClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AcmClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    AcmClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsToCertificateResponse * addTagsToCertificate(const AddTagsToCertificateRequest &request);
    DeleteCertificateResponse * deleteCertificate(const DeleteCertificateRequest &request);
    DescribeCertificateResponse * describeCertificate(const DescribeCertificateRequest &request);
    ExportCertificateResponse * exportCertificate(const ExportCertificateRequest &request);
    GetAccountConfigurationResponse * getAccountConfiguration(const GetAccountConfigurationRequest &request);
    GetAccountConfigurationResponse * getAccountConfiguration();
    GetCertificateResponse * getCertificate(const GetCertificateRequest &request);
    ImportCertificateResponse * importCertificate(const ImportCertificateRequest &request);
    ListCertificatesResponse * listCertificates(const ListCertificatesRequest &request);
    ListTagsForCertificateResponse * listTagsForCertificate(const ListTagsForCertificateRequest &request);
    PutAccountConfigurationResponse * putAccountConfiguration(const PutAccountConfigurationRequest &request);
    RemoveTagsFromCertificateResponse * removeTagsFromCertificate(const RemoveTagsFromCertificateRequest &request);
    RenewCertificateResponse * renewCertificate(const RenewCertificateRequest &request);
    RequestCertificateResponse * requestCertificate(const RequestCertificateRequest &request);
    ResendValidationEmailResponse * resendValidationEmail(const ResendValidationEmailRequest &request);
    UpdateCertificateOptionsResponse * updateCertificateOptions(const UpdateCertificateOptionsRequest &request);

protected:
    /// @cond internal
    AcmClientPrivate * const d_ptr; ///< Internal d-pointer.
    AcmClient(AcmClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(AcmClient)
    Q_DISABLE_COPY(AcmClient)

};

} // namespace ACM
} // namespace QtAws

#endif
