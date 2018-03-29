/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_ELASTICTRANSCODERCLIENTREQUEST_P_H
#define QTAWS_ELASTICTRANSCODERCLIENTREQUEST_P_H

#include "elastictranscoder_p.h"
#include "elastictranscoderclientrequest.h"

namespace AWS {

namespace ElasticTranscoder {

class ElasticTranscoderClientRequest;

class QTAWS_EXPORT ElasticTranscoderClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    ElasticTranscoderClientRequest::Action action; ///< ElasticTranscoder action to be performed.
    QString apiVersion;        ///< ElasticTranscoder API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ElasticTranscoder request (query string) parameters. @todo?

    ElasticTranscoderClientRequestPrivate(const ElasticTranscoderClientRequest::Action action, ElasticTranscoderClientRequest * const q);
    ElasticTranscoderClientRequestPrivate(const ElasticTranscoderClientRequestPrivate &other, ElasticTranscoderClientRequest * const q);

    static QString toString(const ElasticTranscoderClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ElasticTranscoderClientRequest)

};

} // namespace ElasticTranscoder
} // namespace AWS

#endif
