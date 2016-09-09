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

#ifndef QTAWS_ACMCLIENT_H
#define QTAWS_ACMCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    AcmAddTagsToCertificateResponse * addTagsToCertificate(const AcmAddTagsToCertificateRequest &request);
    AcmDeleteCertificateResponse * deleteCertificate(const AcmDeleteCertificateRequest &request);
    AcmDescribeCertificateResponse * describeCertificate(const AcmDescribeCertificateRequest &request);
    AcmGetCertificateResponse * getCertificate(const AcmGetCertificateRequest &request);
    AcmListCertificatesResponse * listCertificates(const AcmListCertificatesRequest &request);
    AcmListTagsForCertificateResponse * listTagsForCertificate(const AcmListTagsForCertificateRequest &request);
    AcmRemoveTagsFromCertificateResponse * removeTagsFromCertificate(const AcmRemoveTagsFromCertificateRequest &request);
    AcmRequestCertificateResponse * requestCertificate(const AcmRequestCertificateRequest &request);
    AcmResendValidationEmailResponse * resendValidationEmail(const AcmResendValidationEmailRequest &request);

private:
    Q_DECLARE_PRIVATE(AcmClient)
    Q_DISABLE_COPY(AcmClient)

};

QTAWS_END_NAMESPACE

#endif
