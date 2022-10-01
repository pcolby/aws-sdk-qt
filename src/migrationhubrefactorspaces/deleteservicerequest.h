// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICEREQUEST_H
#define QTAWS_DELETESERVICEREQUEST_H

#include "migrationhubrefactorspacesrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class DeleteServiceRequestPrivate;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT DeleteServiceRequest : public MigrationHubRefactorSpacesRequest {

public:
    DeleteServiceRequest(const DeleteServiceRequest &other);
    DeleteServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServiceRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
