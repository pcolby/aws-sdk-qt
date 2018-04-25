/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_REKOGNITIONREQUEST_P_H
#define QTAWS_REKOGNITIONREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "rekognitionrequest.h"

namespace QtAws {
namespace Rekognition {

class RekognitionRequest;

class QTAWS_EXPORT RekognitionRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    RekognitionRequest::Action action; ///< Rekognition action to be performed.
    QString apiVersion;        ///< Rekognition API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Rekognition request (query string) parameters. @todo?

    RekognitionRequestPrivate(const RekognitionRequest::Action action, RekognitionRequest * const q);
    RekognitionRequestPrivate(const RekognitionRequestPrivate &other, RekognitionRequest * const q);

    static QString toString(const RekognitionRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(RekognitionRequest)

};

} // namespace Rekognition
} // namespace QtAws

#endif
