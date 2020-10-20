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

#ifndef QTAWS_EFSREQUEST_P_H
#define QTAWS_EFSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "efsrequest.h"

namespace QtAws {
namespace EFS {

class EfsRequest;

class QTAWS_EXPORT EfsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    EfsRequest::Action action; ///< EFS action to be performed.
    QString apiVersion;        ///< EFS API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< EFS request (query string) parameters. @todo?

    EfsRequestPrivate(const EfsRequest::Action action, EfsRequest * const q);
    EfsRequestPrivate(const EfsRequestPrivate &other, EfsRequest * const q);

    static QString toString(const EfsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(EfsRequest)

};

} // namespace EFS
} // namespace QtAws

#endif
