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

#ifndef QTAWS_RUMREQUEST_P_H
#define QTAWS_RUMREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "rumrequest.h"

namespace QtAws {
namespace Rum {

class RumRequest;

class RumRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    RumRequest::Action action; ///< Rum action to be performed.
    QString apiVersion;        ///< Rum API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Rum request (query string) parameters. @todo?

    RumRequestPrivate(const RumRequest::Action action, RumRequest * const q);
    RumRequestPrivate(const RumRequestPrivate &other, RumRequest * const q);

    static QString toString(const RumRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(RumRequest)

};

} // namespace Rum
} // namespace QtAws

#endif
