// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTEREQUEST_H
#define QTAWS_CREATEROUTEREQUEST_H

#include "migrationhubrefactorspacesrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class CreateRouteRequestPrivate;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT CreateRouteRequest : public MigrationHubRefactorSpacesRequest {

public:
    CreateRouteRequest(const CreateRouteRequest &other);
    CreateRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRouteRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
