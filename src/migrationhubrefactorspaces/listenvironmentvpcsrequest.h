// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTVPCSREQUEST_H
#define QTAWS_LISTENVIRONMENTVPCSREQUEST_H

#include "migrationhubrefactorspacesrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class ListEnvironmentVpcsRequestPrivate;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT ListEnvironmentVpcsRequest : public MigrationHubRefactorSpacesRequest {

public:
    ListEnvironmentVpcsRequest(const ListEnvironmentVpcsRequest &other);
    ListEnvironmentVpcsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEnvironmentVpcsRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
