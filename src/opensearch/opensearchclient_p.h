// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPENSEARCHCLIENT_P_H
#define QTAWS_OPENSEARCHCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace OpenSearch {

class OpenSearchClient;

class OpenSearchClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit OpenSearchClientPrivate(OpenSearchClient * const q);

private:
    Q_DECLARE_PUBLIC(OpenSearchClient)
    Q_DISABLE_COPY(OpenSearchClientPrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
