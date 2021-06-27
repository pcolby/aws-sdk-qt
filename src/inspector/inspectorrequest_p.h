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

#ifndef QTAWS_INSPECTORREQUEST_P_H
#define QTAWS_INSPECTORREQUEST_P_H

namespace QtAws {
namespace Inspector {

class InspectorRequest;

class InspectorRequestPrivate {

public:
    InspectorRequest::Action action; ///< Inspector action to be performed.
    QString apiVersion;        ///< Inspector API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Inspector request (query string) parameters. @todo?

    InspectorRequestPrivate(const InspectorRequest::Action action, InspectorRequest * const q);
    InspectorRequestPrivate(const InspectorRequestPrivate &other, InspectorRequest * const q);

    static QString toString(const InspectorRequest::Action &action);

protected:
    InspectorRequest * const q_ptr; ///< Internal q-pointer.

private:
    Q_DECLARE_PUBLIC(InspectorRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
