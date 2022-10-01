// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICINFERENCEREQUEST_P_H
#define QTAWS_ELASTICINFERENCEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "elasticinferencerequest.h"

namespace QtAws {
namespace ElasticInference {

class ElasticInferenceRequest;

class ElasticInferenceRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ElasticInferenceRequest::Action action; ///< ElasticInference action to be performed.
    QString apiVersion;        ///< ElasticInference API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ElasticInference request (query string) parameters. @todo?

    ElasticInferenceRequestPrivate(const ElasticInferenceRequest::Action action, ElasticInferenceRequest * const q);
    ElasticInferenceRequestPrivate(const ElasticInferenceRequestPrivate &other, ElasticInferenceRequest * const q);

    static QString toString(const ElasticInferenceRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ElasticInferenceRequest)

};

} // namespace ElasticInference
} // namespace QtAws

#endif
