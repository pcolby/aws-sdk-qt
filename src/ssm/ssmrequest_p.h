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

#ifndef QTAWS_SSMREQUEST_P_H
#define QTAWS_SSMREQUEST_P_H

namespace QtAws {
namespace SSM {

class SsmRequest;

class SsmRequestPrivate {

public:
    SsmRequest::Action action; ///< SSM action to be performed.
    QString apiVersion;        ///< SSM API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SSM request (query string) parameters. @todo?

    SsmRequestPrivate(const SsmRequest::Action action, SsmRequest * const q);
    SsmRequestPrivate(const SsmRequestPrivate &other, SsmRequest * const q);

    static QString toString(const SsmRequest::Action &action);

protected:
    SsmRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(SsmRequest)

};

} // namespace SSM
} // namespace QtAws

#endif
