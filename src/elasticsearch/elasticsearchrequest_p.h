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
