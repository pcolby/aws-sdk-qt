// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ORGANIZATIONSREQUEST_P_H
#define QTAWS_ORGANIZATIONSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class OrganizationsRequest;

class OrganizationsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    OrganizationsRequest::Action action; ///< Organizations action to be performed.
    QString apiVersion;        ///< Organizations API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Organizations request (query string) parameters. @todo?

    OrganizationsRequestPrivate(const OrganizationsRequest::Action action, OrganizationsRequest * const q);
    OrganizationsRequestPrivate(const OrganizationsRequestPrivate &other, OrganizationsRequest * const q);

    static QString toString(const OrganizationsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(OrganizationsRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
