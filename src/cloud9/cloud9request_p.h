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

#ifndef QTAWS_CLOUD9REQUEST_P_H
#define QTAWS_CLOUD9REQUEST_P_H

namespace QtAws {
namespace Cloud9 {

class Cloud9Request;

class Cloud9RequestPrivate {

public:
    Cloud9Request::Action action; ///< Cloud9 action to be performed.
    QString apiVersion;        ///< Cloud9 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Cloud9 request (query string) parameters. @todo?

    Cloud9RequestPrivate(const Cloud9Request::Action action, Cloud9Request * const q);
    Cloud9RequestPrivate(const Cloud9RequestPrivate &other, Cloud9Request * const q);

    static QString toString(const Cloud9Request::Action &action);

protected:
    Cloud9Request * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(Cloud9Request)

};

} // namespace Cloud9
} // namespace QtAws

#endif
