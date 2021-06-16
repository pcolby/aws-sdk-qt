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

#ifndef QTAWS_IVSREQUEST_P_H
#define QTAWS_IVSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ivsrequest.h"

namespace QtAws {
namespace IVS {

class IvsRequest;

class QTAWS_EXPORT IvsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    IvsRequest::Action action; ///< IVS action to be performed.
    QString apiVersion;        ///< IVS API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< IVS request (query string) parameters. @todo?

    IvsRequestPrivate(const IvsRequest::Action action, IvsRequest * const q);
    IvsRequestPrivate(const IvsRequestPrivate &other, IvsRequest * const q);

    static QString toString(const IvsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(IvsRequest)

};

} // namespace IVS
} // namespace QtAws

#endif
