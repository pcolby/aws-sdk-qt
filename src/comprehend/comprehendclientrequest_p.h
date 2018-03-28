/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_COMPREHENDCLIENTREQUEST_P_H
#define QTAWS_COMPREHENDCLIENTREQUEST_P_H

#include "comprehend_p.h"
#include "comprehendclientrequest.h"

namespace AWS {

namespace Comprehend {

class ComprehendClientRequest;

class QTAWS_EXPORT ComprehendClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    ComprehendClientRequest::Action action; ///< Comprehend action to be performed.
    QString apiVersion;        ///< Comprehend API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Comprehend request (query string) parameters. @todo?

    ComprehendClientRequestPrivate(const ComprehendClientRequest::Action action, ComprehendClientRequest * const q);
    ComprehendClientRequestPrivate(const ComprehendClientRequestPrivate &other, ComprehendClientRequest * const q);

    static QString toString(const ComprehendClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ComprehendClientRequest)

};

} // namespace Comprehend
} // namespace AWS

#endif
