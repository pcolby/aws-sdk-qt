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

#ifndef QTAWS_ACMPCACLIENT_H
#define QTAWS_ACMPCACLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsacmpcaglobal.h"

class QNetworkReply;

namespace QtAws {
namespace AcmPca {

class AcmPcaClientPrivate;
class CreateCertificateAuthorityRequest;
class CreateCertificateAuthorityResponse;
class CreateCertificateAuthorityAuditReportRequest;
class CreateCertificateAuthorityAuditReportResponse;
class CreatePermissionRequest;
class CreatePermissionResponse;
class DeleteCertificateAuthorityRequest;
class DeleteCertificateAuthorityResponse;
class DeletePermissionRequest;
class DeletePermissionResponse;
class DeletePolicyRequest;
class DeletePolicyResponse;
class DescribeCertificateAuthorityRequest;
class DescribeCertificateAuthorityResponse;
class DescribeCertificateAuthorityAuditReportRequest;
class DescribeCertificateAuthorityAuditReportResponse;
class GetCertificateRequest;
class GetCertificateResponse;
class GetCertificateAuthorityCertificateRequest;
class GetCertificateAuthorityCertificateResponse;
class GetCertificateAuthorityCsrRequest;
class GetCertificateAuthorityCsrResponse;
class GetPolicyRequest;
class GetPolicyResponse;
class ImportCertificateAuthorityCertificateRequest;
class ImportCertificateAuthorityCertificateResponse;
class IssueCertificateRequest;
class IssueCertificateResponse;
class ListCertificateAuthoritiesRequest;
class ListCertificateAuthoritiesResponse;
class ListPermissionsRequest;
class ListPermissionsResponse;
class ListTagsRequest;
class ListTagsResponse;
class PutPolicyRequest;
class PutPolicyResponse;
class RestoreCertificateAuthorityRequest;
class RestoreCertificateAuthorityResponse;
class RevokeCertificateRequest;
class RevokeCertificateResponse;
class TagCertificateAuthorityRequest;
class TagCertificateAuthorityResponse;
class UntagCertificateAuthorityRequest;
class UntagCertificateAuthorityResponse;
class UpdateCertificateAuthorityRequest;
class UpdateCertificateAuthorityResponse;

class QTAWSACMPCA_EXPORT AcmPcaClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AcmPcaClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AcmPcaClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateCertificateAuthorityResponse * createCertificateAuthority(const CreateCertificateAuthorityRequest &request);
    CreateCertificateAuthorityAuditReportResponse * createCertificateAuthorityAuditReport(const CreateCertificateAuthorityAuditReportRequest &request);
    CreatePermissionResponse * createPermission(const CreatePermissionRequest &request);
    DeleteCertificateAuthorityResponse * deleteCertificateAuthority(const DeleteCertificateAuthorityRequest &request);
    DeletePermissionResponse * deletePermission(const DeletePermissionRequest &request);
    DeletePolicyResponse * deletePolicy(const DeletePolicyRequest &request);
    DescribeCertificateAuthorityResponse * describeCertificateAuthority(const DescribeCertificateAuthorityRequest &request);
    DescribeCertificateAuthorityAuditReportResponse * describeCertificateAuthorityAuditReport(const DescribeCertificateAuthorityAuditReportRequest &request);
    GetCertificateResponse * getCertificate(const GetCertificateRequest &request);
    GetCertificateAuthorityCertificateResponse * getCertificateAuthorityCertificate(const GetCertificateAuthorityCertificateRequest &request);
    GetCertificateAuthorityCsrResponse * getCertificateAuthorityCsr(const GetCertificateAuthorityCsrRequest &request);
    GetPolicyResponse * getPolicy(const GetPolicyRequest &request);
    ImportCertificateAuthorityCertificateResponse * importCertificateAuthorityCertificate(const ImportCertificateAuthorityCertificateRequest &request);
    IssueCertificateResponse * issueCertificate(const IssueCertificateRequest &request);
    ListCertificateAuthoritiesResponse * listCertificateAuthorities(const ListCertificateAuthoritiesRequest &request);
    ListPermissionsResponse * listPermissions(const ListPermissionsRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    PutPolicyResponse * putPolicy(const PutPolicyRequest &request);
    RestoreCertificateAuthorityResponse * restoreCertificateAuthority(const RestoreCertificateAuthorityRequest &request);
    RevokeCertificateResponse * revokeCertificate(const RevokeCertificateRequest &request);
    TagCertificateAuthorityResponse * tagCertificateAuthority(const TagCertificateAuthorityRequest &request);
    UntagCertificateAuthorityResponse * untagCertificateAuthority(const UntagCertificateAuthorityRequest &request);
    UpdateCertificateAuthorityResponse * updateCertificateAuthority(const UpdateCertificateAuthorityRequest &request);

private:
    Q_DECLARE_PRIVATE(AcmPcaClient)
    Q_DISABLE_COPY(AcmPcaClient)

};

} // namespace AcmPca
} // namespace QtAws

#endif
