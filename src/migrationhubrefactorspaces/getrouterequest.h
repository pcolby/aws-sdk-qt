// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTEREQUEST_H
#define QTAWS_GETROUTEREQUEST_H

#include "migrationhubrefactorspacesrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class GetRouteRequestPrivate;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT GetRouteRequest : public MigrationHubRefactorSpacesRequest {

public:
    GetRouteRequest(const GetRouteRequest &other);
    GetRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRouteRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
