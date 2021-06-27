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

#ifndef QTAWS_HEALTHLAKEREQUEST_P_H
#define QTAWS_HEALTHLAKEREQUEST_P_H

namespace QtAws {
namespace HealthLake {

class HealthLakeRequest;

class HealthLakeRequestPrivate {

public:
    HealthLakeRequest::Action action; ///< HealthLake action to be performed.
    QString apiVersion;        ///< HealthLake API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< HealthLake request (query string) parameters. @todo?

    HealthLakeRequestPrivate(const HealthLakeRequest::Action action, HealthLakeRequest * const q);
    HealthLakeRequestPrivate(const HealthLakeRequestPrivate &other, HealthLakeRequest * const q);

    static QString toString(const HealthLakeRequest::Action &action);

protected:
    HealthLakeRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(HealthLakeRequest)

};

} // namespace HealthLake
} // namespace QtAws

#endif
