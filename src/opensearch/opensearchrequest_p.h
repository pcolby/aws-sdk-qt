// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPENSEARCHREQUEST_P_H
#define QTAWS_OPENSEARCHREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "opensearchrequest.h"

namespace QtAws {
namespace OpenSearch {

class OpenSearchRequest;

class OpenSearchRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    OpenSearchRequest::Action action; ///< OpenSearch action to be performed.
    QString apiVersion;        ///< OpenSearch API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< OpenSearch request (query string) parameters. @todo?

    OpenSearchRequestPrivate(const OpenSearchRequest::Action action, OpenSearchRequest * const q);
    OpenSearchRequestPrivate(const OpenSearchRequestPrivate &other, OpenSearchRequest * const q);

    static QString toString(const OpenSearchRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(OpenSearchRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
