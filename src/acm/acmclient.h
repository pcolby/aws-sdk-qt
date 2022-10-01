// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACMCLIENT_H
#define QTAWS_ACMCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsacmglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Acm {

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

class QTAWSACM_EXPORT AcmClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AcmClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AcmClient(
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

private:
    Q_DECLARE_PRIVATE(AcmClient)
    Q_DISABLE_COPY(AcmClient)

};

} // namespace Acm
} // namespace QtAws

#endif
