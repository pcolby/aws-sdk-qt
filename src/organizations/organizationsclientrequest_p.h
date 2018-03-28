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

#ifndef QTAWS_ORGANIZATIONSCLIENTREQUEST_P_H
#define QTAWS_ORGANIZATIONSCLIENTREQUEST_P_H

#include "organizations_p.h"
#include "organizationsclientrequest.h"

namespace AWS {

namespace Organizations {

class OrganizationsClientRequest;

class QTAWS_EXPORT OrganizationsClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    OrganizationsClientRequest::Action action; ///< Organizations action to be performed.
    QString apiVersion;        ///< Organizations API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Organizations request (query string) parameters. @todo?

    OrganizationsClientRequestPrivate(const OrganizationsClientRequest::Action action, OrganizationsClientRequest * const q);
    OrganizationsClientRequestPrivate(const OrganizationsClientRequestPrivate &other, OrganizationsClientRequest * const q);

    static QString toString(const OrganizationsClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(OrganizationsClientRequest)

};

} // namespace Organizations
} // namespace AWS

#endif
