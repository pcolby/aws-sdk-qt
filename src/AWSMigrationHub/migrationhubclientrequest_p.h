/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MIGRATIONHUBCLIENTREQUEST_P_H
#define QTAWS_MIGRATIONHUBCLIENTREQUEST_P_H

#include "migrationhub_p.h"
#include "migrationhubclientrequest.h"

namespace QtAws {
namespace MigrationHub {

class MigrationHubClientRequest;

class QTAWS_EXPORT MigrationHubClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    MigrationHubClientRequest::Action action; ///< MigrationHub action to be performed.
    QString apiVersion;        ///< MigrationHub API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MigrationHub request (query string) parameters. @todo?

    MigrationHubClientRequestPrivate(const MigrationHubClientRequest::Action action, MigrationHubClientRequest * const q);
    MigrationHubClientRequestPrivate(const MigrationHubClientRequestPrivate &other, MigrationHubClientRequest * const q);

    static QString toString(const MigrationHubClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MigrationHubClientRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
