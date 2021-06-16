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

#ifndef QTAWS_SSOADMINREQUEST_P_H
#define QTAWS_SSOADMINREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ssoadminrequest.h"

namespace QtAws {
namespace SSOAdmin {

class SSOAdminRequest;

class QTAWS_EXPORT SSOAdminRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SSOAdminRequest::Action action; ///< SSOAdmin action to be performed.
    QString apiVersion;        ///< SSOAdmin API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SSOAdmin request (query string) parameters. @todo?

    SSOAdminRequestPrivate(const SSOAdminRequest::Action action, SSOAdminRequest * const q);
    SSOAdminRequestPrivate(const SSOAdminRequestPrivate &other, SSOAdminRequest * const q);

    static QString toString(const SSOAdminRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SSOAdminRequest)

};

} // namespace SSOAdmin
} // namespace QtAws

#endif
