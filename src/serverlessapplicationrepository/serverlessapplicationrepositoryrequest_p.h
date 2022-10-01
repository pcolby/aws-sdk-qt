// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVERLESSAPPLICATIONREPOSITORYREQUEST_P_H
#define QTAWS_SERVERLESSAPPLICATIONREPOSITORYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "serverlessapplicationrepositoryrequest.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

class ServerlessApplicationRepositoryRequest;

class ServerlessApplicationRepositoryRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ServerlessApplicationRepositoryRequest::Action action; ///< ServerlessApplicationRepository action to be performed.
    QString apiVersion;        ///< ServerlessApplicationRepository API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ServerlessApplicationRepository request (query string) parameters. @todo?

    ServerlessApplicationRepositoryRequestPrivate(const ServerlessApplicationRepositoryRequest::Action action, ServerlessApplicationRepositoryRequest * const q);
    ServerlessApplicationRepositoryRequestPrivate(const ServerlessApplicationRepositoryRequestPrivate &other, ServerlessApplicationRepositoryRequest * const q);

    static QString toString(const ServerlessApplicationRepositoryRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ServerlessApplicationRepositoryRequest)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
