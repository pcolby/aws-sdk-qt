// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTESREQUEST_H
#define QTAWS_LISTROUTESREQUEST_H

#include "migrationhubrefactorspacesrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class ListRoutesRequestPrivate;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT ListRoutesRequest : public MigrationHubRefactorSpacesRequest {

public:
    ListRoutesRequest(const ListRoutesRequest &other);
    ListRoutesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRoutesRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
