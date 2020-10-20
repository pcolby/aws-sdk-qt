/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_RAMREQUEST_P_H
#define QTAWS_RAMREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ramrequest.h"

namespace QtAws {
namespace RAM {

class RamRequest;

class QTAWS_EXPORT RamRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    RamRequest::Action action; ///< RAM action to be performed.
    QString apiVersion;        ///< RAM API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< RAM request (query string) parameters. @todo?

    RamRequestPrivate(const RamRequest::Action action, RamRequest * const q);
    RamRequestPrivate(const RamRequestPrivate &other, RamRequest * const q);

    static QString toString(const RamRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(RamRequest)

};

} // namespace RAM
} // namespace QtAws

#endif
