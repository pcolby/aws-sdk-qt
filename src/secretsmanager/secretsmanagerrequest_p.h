/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_SECRETSMANAGERREQUEST_P_H
#define QTAWS_SECRETSMANAGERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "secretsmanagerrequest.h"

namespace QtAws {
namespace SecretsManager {

class SecretsManagerRequest;

class QTAWS_EXPORT SecretsManagerRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SecretsManagerRequest::Action action; ///< SecretsManager action to be performed.
    QString apiVersion;        ///< SecretsManager API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SecretsManager request (query string) parameters. @todo?

    SecretsManagerRequestPrivate(const SecretsManagerRequest::Action action, SecretsManagerRequest * const q);
    SecretsManagerRequestPrivate(const SecretsManagerRequestPrivate &other, SecretsManagerRequest * const q);

    static QString toString(const SecretsManagerRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SecretsManagerRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
