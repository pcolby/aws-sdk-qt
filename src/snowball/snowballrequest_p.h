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

#ifndef QTAWS_SNOWBALLREQUEST_P_H
#define QTAWS_SNOWBALLREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "snowballrequest.h"

namespace QtAws {
namespace Snowball {

class SnowballRequest;

class SnowballRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SnowballRequest::Action action; ///< Snowball action to be performed.
    QString apiVersion;        ///< Snowball API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Snowball request (query string) parameters. @todo?

    SnowballRequestPrivate(const SnowballRequest::Action action, SnowballRequest * const q);
    SnowballRequestPrivate(const SnowballRequestPrivate &other, SnowballRequest * const q);

    static QString toString(const SnowballRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SnowballRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
