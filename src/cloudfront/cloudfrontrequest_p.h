/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_CLOUDFRONTREQUEST_P_H
#define QTAWS_CLOUDFRONTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class CloudFrontRequest;

class QTAWS_EXPORT CloudFrontRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CloudFrontRequest::Action action; ///< CloudFront action to be performed.
    QString apiVersion;        ///< CloudFront API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudFront request (query string) parameters. @todo?

    CloudFrontRequestPrivate(const CloudFrontRequest::Action action, CloudFrontRequest * const q);
    CloudFrontRequestPrivate(const CloudFrontRequestPrivate &other, CloudFrontRequest * const q);

    static QString toString(const CloudFrontRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudFrontRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
