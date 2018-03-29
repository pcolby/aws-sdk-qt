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

#ifndef QTAWS_REKOGNITIONCLIENTREQUEST_P_H
#define QTAWS_REKOGNITIONCLIENTREQUEST_P_H

#include "rekognition_p.h"
#include "rekognitionclientrequest.h"

namespace AWS {

namespace Rekognition {

class RekognitionClientRequest;

class QTAWS_EXPORT RekognitionClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    RekognitionClientRequest::Action action; ///< Rekognition action to be performed.
    QString apiVersion;        ///< Rekognition API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Rekognition request (query string) parameters. @todo?

    RekognitionClientRequestPrivate(const RekognitionClientRequest::Action action, RekognitionClientRequest * const q);
    RekognitionClientRequestPrivate(const RekognitionClientRequestPrivate &other, RekognitionClientRequest * const q);

    static QString toString(const RekognitionClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(RekognitionClientRequest)

};

} // namespace Rekognition
} // namespace AWS

#endif
