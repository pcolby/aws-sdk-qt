// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICTRANSCODERREQUEST_P_H
#define QTAWS_ELASTICTRANSCODERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "elastictranscoderrequest.h"

namespace QtAws {
namespace ElasticTranscoder {

class ElasticTranscoderRequest;

class ElasticTranscoderRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ElasticTranscoderRequest::Action action; ///< ElasticTranscoder action to be performed.
    QString apiVersion;        ///< ElasticTranscoder API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ElasticTranscoder request (query string) parameters. @todo?

    ElasticTranscoderRequestPrivate(const ElasticTranscoderRequest::Action action, ElasticTranscoderRequest * const q);
    ElasticTranscoderRequestPrivate(const ElasticTranscoderRequestPrivate &other, ElasticTranscoderRequest * const q);

    static QString toString(const ElasticTranscoderRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ElasticTranscoderRequest)

};

} // namespace ElasticTranscoder
} // namespace QtAws

#endif
