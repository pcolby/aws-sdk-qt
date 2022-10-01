// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDSEARCHDOMAINCLIENT_H
#define QTAWS_CLOUDSEARCHDOMAINCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscloudsearchdomainglobal.h"

class QNetworkReply;

namespace QtAws {
namespace CloudSearchDomain {

class CloudSearchDomainClientPrivate;
class SearchRequest;
class SearchResponse;
class SuggestRequest;
class SuggestResponse;
class UploadDocumentsRequest;
class UploadDocumentsResponse;

class QTAWSCLOUDSEARCHDOMAIN_EXPORT CloudSearchDomainClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CloudSearchDomainClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit CloudSearchDomainClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    SearchResponse * search(const SearchRequest &request);
    SuggestResponse * suggest(const SuggestRequest &request);
    UploadDocumentsResponse * uploadDocuments(const UploadDocumentsRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudSearchDomainClient)
    Q_DISABLE_COPY(CloudSearchDomainClient)

};

} // namespace CloudSearchDomain
} // namespace QtAws

#endif
