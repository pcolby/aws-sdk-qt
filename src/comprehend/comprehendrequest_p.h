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

#ifndef QTAWS_COMPREHENDREQUEST_P_H
#define QTAWS_COMPREHENDREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class ComprehendRequest;

class QTAWS_EXPORT ComprehendRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ComprehendRequest::Action action; ///< Comprehend action to be performed.
    QString apiVersion;        ///< Comprehend API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Comprehend request (query string) parameters. @todo?

    ComprehendRequestPrivate(const ComprehendRequest::Action action, ComprehendRequest * const q);
    ComprehendRequestPrivate(const ComprehendRequestPrivate &other, ComprehendRequest * const q);

    static QString toString(const ComprehendRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ComprehendRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
