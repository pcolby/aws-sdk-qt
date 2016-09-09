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

#ifndef QTAWS_CLOUDSEARCHDOMAINCLIENT_H
#define QTAWS_CLOUDSEARCHDOMAINCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class CloudSearchDomainClientPrivate;

class QTAWS_EXPORT CloudSearchDomainClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CloudSearchDomainClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CloudSearchDomainClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CloudSearchDomainSearchResponse * search(const CloudSearchDomainSearchRequest &request);
    CloudSearchDomainSuggestResponse * suggest(const CloudSearchDomainSuggestRequest &request);
    CloudSearchDomainUploadDocumentsResponse * uploadDocuments(const CloudSearchDomainUploadDocumentsRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudSearchDomainClient)
    Q_DISABLE_COPY(CloudSearchDomainClient)

};

QTAWS_END_NAMESPACE

#endif
