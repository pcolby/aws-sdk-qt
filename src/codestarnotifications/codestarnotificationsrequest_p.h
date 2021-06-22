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

#ifndef QTAWS_CODESTARNOTIFICATIONSREQUEST_P_H
#define QTAWS_CODESTARNOTIFICATIONSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "codestarnotificationsrequest.h"

namespace QtAws {
namespace CodeStarNotifications {

class CodeStarNotificationsRequest;

class CodeStarNotificationsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CodeStarNotificationsRequest::Action action; ///< CodeStarNotifications action to be performed.
    QString apiVersion;        ///< CodeStarNotifications API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CodeStarNotifications request (query string) parameters. @todo?

    CodeStarNotificationsRequestPrivate(const CodeStarNotificationsRequest::Action action, CodeStarNotificationsRequest * const q);
    CodeStarNotificationsRequestPrivate(const CodeStarNotificationsRequestPrivate &other, CodeStarNotificationsRequest * const q);

    static QString toString(const CodeStarNotificationsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CodeStarNotificationsRequest)

};

} // namespace CodeStarNotifications
} // namespace QtAws

#endif
