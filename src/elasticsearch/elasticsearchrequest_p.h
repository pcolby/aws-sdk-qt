// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICSEARCHREQUEST_P_H
#define QTAWS_ELASTICSEARCHREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "elasticsearchrequest.h"

namespace QtAws {
namespace Elasticsearch {

class ElasticsearchRequest;

class ElasticsearchRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ElasticsearchRequest::Action action; ///< Elasticsearch action to be performed.
    QString apiVersion;        ///< Elasticsearch API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Elasticsearch request (query string) parameters. @todo?

    ElasticsearchRequestPrivate(const ElasticsearchRequest::Action action, ElasticsearchRequest * const q);
    ElasticsearchRequestPrivate(const ElasticsearchRequestPrivate &other, ElasticsearchRequest * const q);

    static QString toString(const ElasticsearchRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ElasticsearchRequest)

};

} // namespace Elasticsearch
} // namespace QtAws

#endif
