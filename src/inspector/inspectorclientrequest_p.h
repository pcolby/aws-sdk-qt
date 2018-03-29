/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_INSPECTORCLIENTREQUEST_P_H
#define QTAWS_INSPECTORCLIENTREQUEST_P_H

#include "inspector_p.h"
#include "inspectorclientrequest.h"

namespace AWS {

namespace Inspector {

class InspectorClientRequest;

class QTAWS_EXPORT InspectorClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    InspectorClientRequest::Action action; ///< Inspector action to be performed.
    QString apiVersion;        ///< Inspector API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Inspector request (query string) parameters. @todo?

    InspectorClientRequestPrivate(const InspectorClientRequest::Action action, InspectorClientRequest * const q);
    InspectorClientRequestPrivate(const InspectorClientRequestPrivate &other, InspectorClientRequest * const q);

    static QString toString(const InspectorClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(InspectorClientRequest)

};

} // namespace Inspector
} // namespace AWS

#endif
