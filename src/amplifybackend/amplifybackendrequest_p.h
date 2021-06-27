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

#ifndef QTAWS_AMPLIFYBACKENDREQUEST_P_H
#define QTAWS_AMPLIFYBACKENDREQUEST_P_H

namespace QtAws {
namespace AmplifyBackend {

class AmplifyBackendRequest;

class AmplifyBackendRequestPrivate {

public:
    AmplifyBackendRequest::Action action; ///< AmplifyBackend action to be performed.
    QString apiVersion;        ///< AmplifyBackend API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AmplifyBackend request (query string) parameters. @todo?

    AmplifyBackendRequestPrivate(const AmplifyBackendRequest::Action action, AmplifyBackendRequest * const q);
    AmplifyBackendRequestPrivate(const AmplifyBackendRequestPrivate &other, AmplifyBackendRequest * const q);

    static QString toString(const AmplifyBackendRequest::Action &action);

protected:
    AmplifyBackendRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(AmplifyBackendRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
