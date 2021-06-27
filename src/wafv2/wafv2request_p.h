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

#ifndef QTAWS_WAFV2REQUEST_P_H
#define QTAWS_WAFV2REQUEST_P_H

namespace QtAws {
namespace WAFV2 {

class Wafv2Request;

class Wafv2RequestPrivate {

public:
    Wafv2Request::Action action; ///< WAFV2 action to be performed.
    QString apiVersion;        ///< WAFV2 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< WAFV2 request (query string) parameters. @todo?

    Wafv2RequestPrivate(const Wafv2Request::Action action, Wafv2Request * const q);
    Wafv2RequestPrivate(const Wafv2RequestPrivate &other, Wafv2Request * const q);

    static QString toString(const Wafv2Request::Action &action);

protected:
    Wafv2Request * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(Wafv2Request)

};

} // namespace WAFV2
} // namespace QtAws

#endif
