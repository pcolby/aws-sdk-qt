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

#ifndef QTAWS_S3REQUEST_P_H
#define QTAWS_S3REQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "s3request.h"

namespace QtAws {
namespace S3 {

class S3Request;

class QTAWS_EXPORT S3RequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    S3Request::Action action; ///< S3 action to be performed.
    QString apiVersion;        ///< S3 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< S3 request (query string) parameters. @todo?

    S3RequestPrivate(const S3Request::Action action, S3Request * const q);
    S3RequestPrivate(const S3RequestPrivate &other, S3Request * const q);

    static QString toString(const S3Request::Action &action);

private:
    Q_DECLARE_PUBLIC(S3Request)

};

} // namespace S3
} // namespace QtAws

#endif
