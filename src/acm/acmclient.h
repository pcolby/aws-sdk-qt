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

#ifndef QTAWS_ACMCLIENT_H
#define QTAWS_ACMCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace ACM {

class AcmClientPrivate;

class QTAWS_EXPORT AcmClient : public AwsAbstractClient {
    Q_OBJECT

public:
    AcmClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    AcmClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddTagsToCertificateResponse * addTagsToCertificate(const AddTagsToCertificateRequest &request);
    DeleteCertificateResponse * deleteCertificate(const DeleteCertificateRequest &request);
    DescribeCertificateResponse * describeCertificate(const DescribeCertificateRequest &request);
    GetCertificateResponse * getCertificate(const GetCertificateRequest &request);
    ImportCertificateResponse * importCertificate(const ImportCertificateRequest &request);
    ListCertificatesResponse * listCertificates(const ListCertificatesRequest &request);
    ListTagsForCertificateResponse * listTagsForCertificate(const ListTagsForCertificateRequest &request);
    RemoveTagsFromCertificateResponse * removeTagsFromCertificate(const RemoveTagsFromCertificateRequest &request);
    RequestCertificateResponse * requestCertificate(const RequestCertificateRequest &request);
    ResendValidationEmailResponse * resendValidationEmail(const ResendValidationEmailRequest &request);

private:
    Q_DECLARE_PRIVATE(AcmClient)
    Q_DISABLE_COPY(AcmClient)

};

} // namespace ACM
} // namespace AWS

#endif
