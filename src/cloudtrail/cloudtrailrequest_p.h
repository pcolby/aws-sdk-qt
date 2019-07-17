/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_CLOUDTRAILREQUEST_P_H
#define QTAWS_CLOUDTRAILREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "cloudtrailrequest.h"

namespace QtAws {
namespace CloudTrail {

class CloudTrailRequest;

class QTAWS_EXPORT CloudTrailRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CloudTrailRequest::Action action; ///< CloudTrail action to be performed.
    QString apiVersion;        ///< CloudTrail API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CloudTrail request (query string) parameters. @todo?

    CloudTrailRequestPrivate(const CloudTrailRequest::Action action, CloudTrailRequest * const q);
    CloudTrailRequestPrivate(const CloudTrailRequestPrivate &other, CloudTrailRequest * const q);

    static QString toString(const CloudTrailRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CloudTrailRequest)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
