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

#ifndef QTAWS_MIGRATIONHUBREFACTORSPACESREQUEST_P_H
#define QTAWS_MIGRATIONHUBREFACTORSPACESREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "migrationhubrefactorspacesrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class MigrationHubRefactorSpacesRequest;

class MigrationHubRefactorSpacesRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MigrationHubRefactorSpacesRequest::Action action; ///< MigrationHubRefactorSpaces action to be performed.
    QString apiVersion;        ///< MigrationHubRefactorSpaces API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MigrationHubRefactorSpaces request (query string) parameters. @todo?

    MigrationHubRefactorSpacesRequestPrivate(const MigrationHubRefactorSpacesRequest::Action action, MigrationHubRefactorSpacesRequest * const q);
    MigrationHubRefactorSpacesRequestPrivate(const MigrationHubRefactorSpacesRequestPrivate &other, MigrationHubRefactorSpacesRequest * const q);

    static QString toString(const MigrationHubRefactorSpacesRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MigrationHubRefactorSpacesRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
