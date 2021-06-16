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

#ifndef QTAWS_SNSREQUEST_P_H
#define QTAWS_SNSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "snsrequest.h"

namespace QtAws {
namespace SNS {

class SnsRequest;

class QTAWS_EXPORT SnsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SnsRequest::Action action; ///< SNS action to be performed.
    QString apiVersion;        ///< SNS API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SNS request (query string) parameters. @todo?

    SnsRequestPrivate(const SnsRequest::Action action, SnsRequest * const q);
    SnsRequestPrivate(const SnsRequestPrivate &other, SnsRequest * const q);

    static QString toString(const SnsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SnsRequest)

};

} // namespace SNS
} // namespace QtAws

#endif
